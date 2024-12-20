function elementsWithLowestFrequency(arr) {
  const freqMap = new Map();
  for (const num of arr) {
      freqMap.set(num, (freqMap.get(num) || 0) + 1);
  }
  const result = [];
  freqMap.forEach((freq, num) => {
      if (freq === 1) {
          result.push(num);
      }
  });
  return result;
}

const exampleData = [1, 3, 2, 3, 4, 4, 5, 5, 6];
const result = elementsWithLowestFrequency(exampleData);

console.log(`Data: ${exampleData}`);
console.log(`Elements with frequency 1: ${result}`);
