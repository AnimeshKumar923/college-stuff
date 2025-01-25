export interface Annotation {
  id: string;
  startTime: number;
  endTime: number;
  label: string;
  transcription?: string;
  notes?: string;
}

export interface AudioState {
  isPlaying: boolean;
  currentTime: number;
  duration: number;
}

export interface WaveformData {
  peaks: number[];
  duration: number;
}