function countDigits(number) {
    let count = 0;
    if (number === 0) {
        return 1;
    }
    while (number !== 0) {
        number = Math.floor(number / 10);
        count++;
    }
    return count;
}

function main() {
    const prompt = require('prompt-sync')(); // Ensure you have 'prompt-sync' installed
    let num = parseInt(prompt("Enter a number: "));
    num = Math.abs(num);

    const digitCount = countDigits(num);
    console.log(`The number of digits in the number is: ${digitCount}`);
}

main();
