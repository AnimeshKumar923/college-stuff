// Initialize WaveSurfer.js
const waveform = WaveSurfer.create({
  container: '#waveform',
  waveColor: 'violet',
  progressColor: 'purple',
  backend: 'mediaelement',
});

// Elements
const audioFileInput = document.getElementById('audioFile');
const playButton = document.getElementById('play');
const pauseButton = document.getElementById('pause');
const annotationList = document.getElementById('annotationList');
const exportButton = document.getElementById('export');
const transcribeButton = document.getElementById('transcribe');

// Annotations Array
const annotations = [];

// Event: Load audio file
audioFileInput.addEventListener('change', (event) => {
  const file = event.target.files[0];
  if (file) {
    const url = URL.createObjectURL(file);
    waveform.load(url);
  }
});

// Event: Play audio
playButton.addEventListener('click', () => {
  waveform.play();
});

// Event: Pause audio
pauseButton.addEventListener('click', () => {
  waveform.pause();
});

// Add Annotation on Click
waveform.on('region-click', (region) => {
  const annotation = {
    start: region.start,
    end: region.end,
    label: prompt('Enter label for this annotation:') || 'No label',
  };
  annotations.push(annotation);
  updateAnnotationList();
});

// Update Annotation List
function updateAnnotationList() {
  annotationList.innerHTML = '';
  annotations.forEach((annotation, index) => {
    const li = document.createElement('li');
    li.textContent = `Annotation ${index + 1}: ${annotation.label} (${annotation.start.toFixed(2)} - ${annotation.end.toFixed(2)}s)`;
    annotationList.appendChild(li);
  });
}

// Export Annotations
exportButton.addEventListener('click', () => {
  const blob = new Blob([JSON.stringify(annotations, null, 2)], { type: 'application/json' });
  const url = URL.createObjectURL(blob);
  const a = document.createElement('a');
  a.href = url;
  a.download = 'annotations.json';
  a.click();
});

// Transcription Feature (Web Speech API)
transcribeButton.addEventListener('click', () => {
  const audioFile = document.getElementById('audioFile').files[0];

  if (!audioFile) {
    alert('Please upload an audio file first.');
    return;
  }

  const formData = new FormData();
  formData.append('audioFile', audioFile);

  fetch('http://localhost:3000/transcribe', {
    method: 'POST',
    body: formData,
  })
    .then(response => response.json())
    .then(data => {
      const transcript = data.transcription;
      const li = document.createElement('li');
      li.textContent = `Transcription: ${transcript}`;
      annotationList.appendChild(li);
    })
    .catch(err => {
      console.error('Error during transcription:', err);
      alert('Error occurred during transcription');
    });
});
