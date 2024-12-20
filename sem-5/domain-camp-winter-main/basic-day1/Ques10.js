const prompt = require('prompt-sync')();

function main() {
    let num = parseInt(prompt("Enter the positive number: "));
    let sum = 0;

    while (num !== 0) {
        const digit = num % 10;
        sum += digit;
        num = Math.floor(num / 10);
    }

    console.log(`Sum is: ${sum}`);
}

main();
