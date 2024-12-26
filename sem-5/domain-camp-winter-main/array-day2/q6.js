function generatePascalsTriangle(rows) {
  let triangle = [];

  for (let i = 0; i < rows; i++) {
      let row = new Array(i + 1).fill(1); // Initialize each row with 1s

      for (let j = 1; j < i; j++) {
          row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
      }

      triangle.push(row);
  }

  return triangle;
}

function printPascalsTriangle(triangle) {
  for (let row of triangle) {
      console.log(row.join(" "));
  }
}

const rows = 6;
const triangle = generatePascalsTriangle(rows);
printPascalsTriangle(triangle);
b