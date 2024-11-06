function swap(arr, i, j) {
  let temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

function partition(arr, low, high) {
  let mid = low + Math.floor((high - low) / 2);
  let pivot = arr[mid];
  swap(arr, mid, high);
  let i = low - 1;
  for (let j = low; j < high; j++) {
      if (arr[j] < pivot) {
          i++;
          swap(arr, i, j);
      }
  }
  swap(arr, i + 1, high);
  return i + 1;
}

function quickSort(arr, low, high) {
  if (low < high) {
      let pi = partition(arr, low, high);
      quickSort(arr, low, pi - 1);
      quickSort(arr, pi + 1, high);
  }
}

// Generate a random array of given size
let n = parseInt(prompt("Enter the number of elements:"));
let arr = [];
for (let i = 0; i < n; i++) {
  arr[i] = Math.floor(Math.random() * 10000);
}

console.log("Generated array:", arr.join(" "));

let start = performance.now();
quickSort(arr, 0, n - 1);
let end = performance.now();

console.log("Sorted array:", arr.join(" "));
console.log("Time taken to sort:", (end - start).toFixed(3), "ms");
