import React from 'react';
import { Trash2, Edit } from 'lucide-react';
import { Annotation } from '../types';

interface AnnotationListProps {
  annotations: Annotation[];
  onDelete: (id: string) => void;
  onEdit: (annotation: Annotation) => void;
}

export default function AnnotationList({ annotations, onDelete, onEdit }: AnnotationListProps) {
  const formatTime = (time: number): string => {
    const minutes = Math.floor(time / 60);
    const seconds = Math.floor(time % 60);
    return `${minutes}:${seconds.toString().padStart(2, '0')}`;
  };

  return (
    <div className="space-y-2">
      {annotations.map((annotation) => (
        <div
          key={annotation.id}
          className="bg-white rounded-lg shadow-sm p-4 hover:shadow-md transition-shadow"
        >
          <div className="flex justify-between items-start">
            <div className="flex-1">
              <div className="flex items-center space-x-2">
                <span className="text-sm font-medium text-gray-600">
                  {formatTime(annotation.startTime)} - {formatTime(annotation.endTime)}
                </span>
                <span className="px-2 py-1 text-xs font-medium bg-blue-100 text-blue-800 rounded">
                  {annotation.label}
                </span>
              </div>
              {annotation.transcription && (
                <p className="mt-2 text-gray-700">{annotation.transcription}</p>
              )}
              {annotation.notes && (
                <p className="mt-1 text-sm text-gray-500">{annotation.notes}</p>
              )}
            </div>
            <div className="flex space-x-2">
              <button
                onClick={() => onEdit(annotation)}
                className="p-1 text-gray-500 hover:text-blue-500 transition-colors"
              >
                <Edit className="w-4 h-4" />
              </button>
              <button
                onClick={() => onDelete(annotation.id)}
                className="p-1 text-gray-500 hover:text-red-500 transition-colors"
              >
                <Trash2 className="w-4 h-4" />
              </button>
            </div>
          </div>
        </div>
      ))}
    </div>
  );
}