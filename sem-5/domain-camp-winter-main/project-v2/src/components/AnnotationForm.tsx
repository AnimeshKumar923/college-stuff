import React, { useState, useEffect } from 'react';
import { X } from 'lucide-react';
import { Annotation } from '../types';

interface AnnotationFormProps {
  currentTime: number;
  onSave: (annotation: Omit<Annotation, 'id'>) => void;
  onClose: () => void;
  editAnnotation?: Annotation;
}

export default function AnnotationForm({
  currentTime,
  onSave,
  onClose,
  editAnnotation,
}: AnnotationFormProps) {
  const [formData, setFormData] = useState({
    startTime: currentTime,
    endTime: currentTime + 5,
    label: '',
    transcription: '',
    notes: '',
  });

  useEffect(() => {
    if (editAnnotation) {
      setFormData({
        startTime: editAnnotation.startTime,
        endTime: editAnnotation.endTime,
        label: editAnnotation.label,
        transcription: editAnnotation.transcription || '',
        notes: editAnnotation.notes || '',
      });
    }
  }, [editAnnotation]);

  const handleSubmit = (e: React.FormEvent) => {
    e.preventDefault();
    onSave(formData);
    onClose();
  };

  return (
    <div className="fixed inset-0 bg-black bg-opacity-50 flex items-center justify-center">
      <div className="bg-white rounded-lg p-6 w-full max-w-md">
        <div className="flex justify-between items-center mb-4">
          <h2 className="text-xl font-semibold">
            {editAnnotation ? 'Edit Annotation' : 'New Annotation'}
          </h2>
          <button
            onClick={onClose}
            className="p-1 hover:bg-gray-100 rounded-full"
          >
            <X className="w-5 h-5" />
          </button>
        </div>

        <form onSubmit={handleSubmit} className="space-y-4">
          <div className="grid grid-cols-2 gap-4">
            <div>
              <label className="block text-sm font-medium text-gray-700">
                Start Time
              </label>
              <input
                type="number"
                step="0.1"
                value={formData.startTime}
                onChange={(e) =>
                  setFormData({ ...formData, startTime: parseFloat(e.target.value) })
                }
                className="mt-1 block w-full rounded-md border-gray-300 shadow-sm focus:border-blue-500 focus:ring-blue-500"
              />
            </div>
            <div>
              <label className="block text-sm font-medium text-gray-700">
                End Time
              </label>
              <input
                type="number"
                step="0.1"
                value={formData.endTime}
                onChange={(e) =>
                  setFormData({ ...formData, endTime: parseFloat(e.target.value) })
                }
                className="mt-1 block w-full rounded-md border-gray-300 shadow-sm focus:border-blue-500 focus:ring-blue-500"
              />
            </div>
          </div>

          <div>
            <label className="block text-sm font-medium text-gray-700">
              Label
            </label>
            <input
              type="text"
              value={formData.label}
              onChange={(e) => setFormData({ ...formData, label: e.target.value })}
              className="mt-1 block w-full rounded-md border-gray-300 shadow-sm focus:border-blue-500 focus:ring-blue-500"
              required
            />
          </div>

          <div>
            <label className="block text-sm font-medium text-gray-700">
              Transcription
            </label>
            <textarea
              value={formData.transcription}
              onChange={(e) =>
                setFormData({ ...formData, transcription: e.target.value })
              }
              rows={3}
              className="mt-1 block w-full rounded-md border-gray-300 shadow-sm focus:border-blue-500 focus:ring-blue-500"
            />
          </div>

          <div>
            <label className="block text-sm font-medium text-gray-700">
              Notes
            </label>
            <textarea
              value={formData.notes}
              onChange={(e) => setFormData({ ...formData, notes: e.target.value })}
              rows={2}
              className="mt-1 block w-full rounded-md border-gray-300 shadow-sm focus:border-blue-500 focus:ring-blue-500"
            />
          </div>

          <div className="flex justify-end space-x-3">
            <button
              type="button"
              onClick={onClose}
              className="px-4 py-2 text-sm font-medium text-gray-700 bg-gray-100 hover:bg-gray-200 rounded-md"
            >
              Cancel
            </button>
            <button
              type="submit"
              className="px-4 py-2 text-sm font-medium text-white bg-blue-500 hover:bg-blue-600 rounded-md"
            >
              {editAnnotation ? 'Update' : 'Create'}
            </button>
          </div>
        </form>
      </div>
    </div>
  );
}