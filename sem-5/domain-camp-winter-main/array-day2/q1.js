function highestFrequencyElement(arr) {
  const freqMap = new Map();

  for (const num of arr) {
      freqMap.set(num, (freqMap.get(num) || 0) + 1);
  }

  let maxFreq = 0;
  let maxElement = null;

  freqMap.forEach((freq, num) => {
      if (freq > maxFreq) {
          maxFreq = freq;
          maxElement = num;
      }
  });

  return { element: maxElement, frequency: maxFreq };
}

const exampleData = [1, 3, 2, 3, 4, 4, 4, 5, 3, 5, 5];

const result = highestFrequencyElement(exampleData);

console.log(`Example Data: ${exampleData}`);
console.log(`Element with the highest frequency: ${result.element}`);
console.log(`Frequency: ${result.frequency}`);
