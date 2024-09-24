function findFrequency(arr) {
  const frequencyMap = {};

  arr.forEach((element) => {
    if (frequencyMap[element]) {
      frequencyMap[element]++;
    } else {
      frequencyMap[element] = 1;
    }
  });

  for (const element in frequencyMap) {
    console.log(`Element: ${element} Frequency: ${frequencyMap[element]}`);
  }
}

let arr = [20, 20, 20, 30, 40, 30, 30, 40, 50, 50];
findFrequency(arr);