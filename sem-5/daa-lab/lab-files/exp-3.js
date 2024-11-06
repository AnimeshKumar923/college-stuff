function findFrequency(arr) {
  let frequency = 1;
  for (let i = 1; i < arr.length; i++) {
    if (arr[i] === arr[i - 1]) {
      frequency++;
    } else {
      console.log(`Element: ${arr[i - 1]} Frequency: ${frequency}`);
      frequency = 1;
    }
  }
  console.log(`Element: ${arr[arr.length - 1]} Frequency: ${frequency}`);
}

// let arr = [1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 4];
let arr = [20,20,20,30,40,30,30,40,50,50];
findFrequency(arr);