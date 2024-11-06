for (let i = 0; i < 5; i++) {  // Outer loop for rows
  let row = "";                // Initialize an empty string for each row
  for (let j = 0; j < 5; j++) { // Inner loop for columns
    row += "*";                // Add an asterisk to the row string
  }
  console.log(row);            // Print the complete row of asterisks
}