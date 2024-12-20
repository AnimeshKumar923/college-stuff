class A {
    Hello(name) {
        if (name) {
            console.log(`hello ${name}`);
        } else {
            console.log("hello everyone");
        }
    }
}

function main() {
    const obj = new A();
    obj.Hello("shreyansh");
}

main();
