const prompt = require('prompt-sync')();

function main() {
    const num = parseInt(prompt());
    let sum = 0;

    for (let i = 1; i <= num; i += 2) {
        sum += i;
    }

    console.log(`sum is: ${sum}`);
}

main();
