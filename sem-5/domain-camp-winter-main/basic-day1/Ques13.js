class Student {
    constructor(rollno, name) {
        this.rollno = rollno;
        this.name = name;
    }
}

class Result extends Student {
    constructor(rollno, name) {
        super(rollno, name);
        this.DAA = 40;
        this.SE = 45;
        this.CS = 45;
        this.sum = this.DAA + this.SE + this.CS;
        this.percentage = (this.sum / 180) * 100;
    }
}

function main() {
    const r1 = new Result();
    console.log(`Sum of marks is: ${r1.sum}`);
    console.log(`Percentage is: ${r1.percentage}`);
}

main();
