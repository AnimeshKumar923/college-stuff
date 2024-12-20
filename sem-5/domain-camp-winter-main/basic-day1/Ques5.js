const prompt = require('prompt-sync')();

function main() {
    const num = parseInt(prompt("Enter the number: "));

    for (let i = 1; i <= 10; i++) {
        console.log(`${num} * ${i} = ${num * i}`);
    }
}

main();
