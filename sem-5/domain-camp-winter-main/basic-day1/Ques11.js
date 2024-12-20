class A {
    intern(stipend) {
        console.log(`Intern stipend is: ${stipend}`);
    }

    Employee(salary, bonus) {
        console.log(`Employee income: ${salary + bonus}`);
    }

    Manager(salary, bonus, incentive) {
        console.log(`Manager income: ${salary + bonus + incentive}`);
    }
}

function main() {
    const obj = new A();
    obj.intern(25000);
    obj.Employee(50000, 15500);
    obj.Manager(75000, 17000, 3000);
}

main();
