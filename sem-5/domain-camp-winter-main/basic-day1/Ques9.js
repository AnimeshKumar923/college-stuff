const prompt = require('prompt-sync')();

function main() {
    const num = prompt("Enter the number: ");
    let s = 0;
    let e = num.length - 1;

    let palindrome = true;

    while (s < e) {
        if (num[s] !== num[e]) {
            palindrome = false;
            break;
        }
        s++;
        e--;
    }

    if (palindrome) {
        console.log("number is palindrome");
    } else {
        console.log("not a palindrome");
    }
}

main();
