import React, { useState } from 'react';
import { Plus, Download } from 'lucide-react';
import AudioPlayer from './components/AudioPlayer';
import AnnotationList from './components/AnnotationList';
import AnnotationForm from './components/AnnotationForm';
import { Annotation } from './types';

function App() {
  const [currentTime, setCurrentTime] = useState(0);
  const [duration, setDuration] = useState(0);
  const [annotations, setAnnotations] = useState<Annotation[]>([]);
  const [showForm, setShowForm] = useState(false);
  const [editingAnnotation, setEditingAnnotation] = useState<Annotation | undefined>();

  // Example audio URL - replace with your actual audio file URL
  const audioUrl = 'https://example.com/audio.mp3';

  const handleSaveAnnotation = (annotationData: Omit<Annotation, 'id'>) => {
    if (editingAnnotation) {
      setAnnotations(annotations.map(a => 
        a.id === editingAnnotation.id 
          ? { ...annotationData, id: editingAnnotation.id }
          : a
      ));
      setEditingAnnotation(undefined);
    } else {
      const newAnnotation: Annotation = {
        ...annotationData,
        id: crypto.randomUUID(),
      };
      setAnnotations([...annotations, newAnnotation]);
    }
  };

  const handleDeleteAnnotation = (id: string) => {
    setAnnotations(annotations.filter(a => a.id !== id));
  };

  const handleEditAnnotation = (annotation: Annotation) => {
    setEditingAnnotation(annotation);
    setShowForm(true);
  };

  const exportAnnotations = () => {
    const data = JSON.stringify(annotations, null, 2);
    const blob = new Blob([data], { type: 'application/json' });
    const url = URL.createObjectURL(blob);
    const a = document.createElement('a');
    a.href = url;
    a.download = 'annotations.json';
    document.body.appendChild(a);
    a.click();
    document.body.removeChild(a);
    URL.revokeObjectURL(url);
  };

  return (
    <div className="min-h-screen bg-gray-50">
      <div className="max-w-4xl mx-auto p-6">
        <header className="mb-8">
          <h1 className="text-3xl font-bold text-gray-900">
            Audio Annotation Tool
          </h1>
          <p className="mt-2 text-gray-600">
            Add time-based annotations, transcriptions, and labels to your audio.
          </p>
        </header>

        <div className="space-y-6">
          <AudioPlayer
            audioUrl={audioUrl}
            onTimeUpdate={setCurrentTime}
            onDurationChange={setDuration}
          />

          <div className="flex justify-between items-center">
            <button
              onClick={() => setShowForm(true)}
              className="flex items-center px-4 py-2 bg-blue-500 text-white rounded-md hover:bg-blue-600 transition-colors"
            >
              <Plus className="w-5 h-5 mr-2" />
              Add Annotation
            </button>

            <button
              onClick={exportAnnotations}
              className="flex items-center px-4 py-2 bg-gray-100 text-gray-700 rounded-md hover:bg-gray-200 transition-colors"
            >
              <Download className="w-5 h-5 mr-2" />
              Export Annotations
            </button>
          </div>

          <div className="bg-white rounded-lg shadow-sm p-6">
            <h2 className="text-xl font-semibold mb-4">Annotations</h2>
            <AnnotationList
              annotations={annotations}
              onDelete={handleDeleteAnnotation}
              onEdit={handleEditAnnotation}
            />
          </div>
        </div>

        {showForm && (
          <AnnotationForm
            currentTime={currentTime}
            onSave={handleSaveAnnotation}
            onClose={() => {
              setShowForm(false);
              setEditingAnnotation(undefined);
            }}
            editAnnotation={editingAnnotation}
          />
        )}
      </div>
    </div>
  );
}

export default App;