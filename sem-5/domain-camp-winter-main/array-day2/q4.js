function mergeSortedArrays(arr1, arr2) {
  let mergedArray = [];
  let i = 0, j = 0;

  while (i < arr1.length && j < arr2.length) {
      if (arr1[i] < arr2[j]) {
          mergedArray.push(arr1[i]);
          i++;
      } else {
          mergedArray.push(arr2[j]);
          j++;
      }
  }

  // Append remaining elements from arr1
  while (i < arr1.length) {
      mergedArray.push(arr1[i]);
      i++;
  }

  // Append remaining elements from arr2
  while (j < arr2.length) {
      mergedArray.push(arr2[j]);
      j++;
  }

  return mergedArray;
}

const arr1 = [1, 3, 5, 7];
const arr2 = [2, 4, 6, 8];

const mergedArray = mergeSortedArrays(arr1, arr2);
console.log(mergedArray);
