const prompt = require('prompt-sync')();

function main() {
    const n = parseInt(prompt("Enter a positive integer: "));
    let sum = 0;

    if (n < 1) {
        console.log("invalid number");
    } else {
        sum = (n * (n + 1)) / 2;
        console.log(`The sum of the first ${n} natural numbers is: ${sum}`);
    }
}

main();
