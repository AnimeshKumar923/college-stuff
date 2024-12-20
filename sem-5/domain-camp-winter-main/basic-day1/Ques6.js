const prompt = require('prompt-sync')();

function main() {
    let num = parseInt(prompt("Enter the number: "));
    let reverse = 0;

    while (num !== 0) {
        const digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = Math.floor(num / 10);
    }

    console.log(`Reverse is: ${reverse}`);
}

main();
