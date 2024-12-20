class Info {
    #employee_id;
    #employee_name;
    #employee_salary;

    // Getter methods
    getId() {
        return this.#employee_id;
    }

    getName() {
        return this.#employee_name;
    }

    getSalary() {
        return this.#employee_salary;
    }

    // Setter methods
    setId(id) {
        this.#employee_id = id;
    }

    setName(name) {
        this.#employee_name = name;
    }

    setSalary(salary) {
        this.#employee_salary = salary;
    }
}

function main() {
    const e1 = new Info();
    e1.setId(1127);
    e1.setName("John");
    e1.setSalary(75000);

    console.log(`Employee id: ${e1.getId()}`);
    console.log(`Employee name: ${e1.getName()}`);
    console.log(`Employee salary: ${e1.getSalary()}`);
}

main();