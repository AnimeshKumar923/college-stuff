const prompt = require('prompt-sync')();

function main() {
    let num = parseInt(prompt("Enter the positive number: "));
    let max = 0;

    while (num !== 0) {
        const digit = num % 10;
        if (digit > max) {
            max = digit;
        }
        num = Math.floor(num / 10);
    }

    console.log(`Largest digit is: ${max}`);
}

main();
