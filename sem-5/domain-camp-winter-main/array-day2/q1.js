function highestFrequency(arr) {
  const freqMap = new Map();

  // Count frequencies of elements
  for (const num of arr) {
      freqMap.set(num, (freqMap.get(num) || 0) + 1);
  }

  let maxFreq = 0;
  let maxElement = -Infinity;

  // Find the element with the highest frequency
  freqMap.forEach((freq, num) => {
      if (freq > maxFreq || (freq === maxFreq && num > maxElement)) {
          maxFreq = freq;
          maxElement = num;
      }
  });

  return maxElement;
}

// Example usage
const arr = [1, 3, 2, 3, 4, 4, 4, 5, 3, 5, 5];
console.log(highestFrequency(arr)); // Output: