import React, { useRef, useState, useEffect } from 'react';
import { Play, Pause, SkipBack, SkipForward } from 'lucide-react';
import { AudioState } from '../types';

interface AudioPlayerProps {
  audioUrl?: string;
  onTimeUpdate: (time: number) => void;
  onDurationChange: (duration: number) => void;
}

export default function AudioPlayer({ audioUrl, onTimeUpdate, onDurationChange }: AudioPlayerProps) {
  const audioRef = useRef<HTMLAudioElement>(null);
  const [audioState, setAudioState] = useState<AudioState>({
    isPlaying: false,
    currentTime: 0,
    duration: 0,
  });

  const togglePlayPause = () => {
    if (audioRef.current) {
      if (audioState.isPlaying) {
        audioRef.current.pause();
      } else {
        audioRef.current.play();
      }
    }
  };

  const skipTime = (seconds: number) => {
    if (audioRef.current) {
      audioRef.current.currentTime += seconds;
    }
  };

  const formatTime = (time: number): string => {
    const minutes = Math.floor(time / 60);
    const seconds = Math.floor(time % 60);
    return `${minutes}:${seconds.toString().padStart(2, '0')}`;
  };

  useEffect(() => {
    const audio = audioRef.current;
    if (!audio) return;

    const handleTimeUpdate = () => {
      setAudioState(prev => ({ ...prev, currentTime: audio.currentTime }));
      onTimeUpdate(audio.currentTime);
    };

    const handleDurationChange = () => {
      setAudioState(prev => ({ ...prev, duration: audio.duration }));
      onDurationChange(audio.duration);
    };

    const handlePlay = () => setAudioState(prev => ({ ...prev, isPlaying: true }));
    const handlePause = () => setAudioState(prev => ({ ...prev, isPlaying: false }));

    audio.addEventListener('timeupdate', handleTimeUpdate);
    audio.addEventListener('durationchange', handleDurationChange);
    audio.addEventListener('play', handlePlay);
    audio.addEventListener('pause', handlePause);

    return () => {
      audio.removeEventListener('timeupdate', handleTimeUpdate);
      audio.removeEventListener('durationchange', handleDurationChange);
      audio.removeEventListener('play', handlePlay);
      audio.removeEventListener('pause', handlePause);
    };
  }, [onTimeUpdate, onDurationChange]);

  return (
    <div className="bg-white rounded-lg shadow-md p-4">
      <audio ref={audioRef} src={audioUrl} />
      
      <div className="flex items-center justify-between mb-4">
        <span className="text-sm text-gray-500">
          {formatTime(audioState.currentTime)}
        </span>
        <div className="flex items-center space-x-4">
          <button
            onClick={() => skipTime(-5)}
            className="p-2 hover:bg-gray-100 rounded-full"
          >
            <SkipBack className="w-5 h-5" />
          </button>
          <button
            onClick={togglePlayPause}
            className="p-3 bg-blue-500 hover:bg-blue-600 rounded-full text-white"
          >
            {audioState.isPlaying ? (
              <Pause className="w-6 h-6" />
            ) : (
              <Play className="w-6 h-6" />
            )}
          </button>
          <button
            onClick={() => skipTime(5)}
            className="p-2 hover:bg-gray-100 rounded-full"
          >
            <SkipForward className="w-5 h-5" />
          </button>
        </div>
        <span className="text-sm text-gray-500">
          {formatTime(audioState.duration)}
        </span>
      </div>

      <input
        type="range"
        min="0"
        max={audioState.duration}
        value={audioState.currentTime}
        onChange={(e) => {
          const time = parseFloat(e.target.value);
          if (audioRef.current) {
            audioRef.current.currentTime = time;
          }
        }}
        className="w-full h-2 bg-gray-200 rounded-lg appearance-none cursor-pointer"
      />
    </div>
  );
}