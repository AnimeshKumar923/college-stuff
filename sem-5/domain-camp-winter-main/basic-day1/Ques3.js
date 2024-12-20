const prompt = require('prompt-sync')();

function main() {
    const n = parseInt(prompt());
    let isPrime = true;

    for (let i = 2; i <= n - 1; i++) {
        if (n % i === 0) {
            isPrime = false;
            break;
        }
    }

    if (!isPrime) {
        console.log("Not Prime");
    } else {
        console.log("Prime number");
    }
}

main();
