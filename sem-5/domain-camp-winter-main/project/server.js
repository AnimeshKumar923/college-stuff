const express = require('express');
const multer = require('multer');
const fs = require('fs');
const { Model,Recognizer } = require('vosk');

const app = express();
const upload = multer({ dest: 'uploads/' });
const model = new Model('/home/animesh/college-stuff/sem-5/domain-camp-winter-main/project/vosk-model-small-en-us-0.15'); // Specify the path to your Vosk model

app.post('/transcribe', upload.single('audioFile'), (req, res) => {
  const audioFilePath = req.file.path;

  // Initialize recognizer
  const recognizer = new Recognizer({ model: model, sampleRate: 16000 });
  const buffer = fs.readFileSync(audioFilePath);

  recognizer.acceptWaveform(buffer);
  const result = recognizer.finalResult();

  // Return the transcription
  res.json({ transcription: result.text });

  // Clean up the uploaded file
  fs.unlinkSync(audioFilePath);
});

app.listen(3000, () => {
  console.log('Server started on http://localhost:3000');
});
