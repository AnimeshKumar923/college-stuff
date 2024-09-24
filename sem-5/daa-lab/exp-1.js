// analyze if the stack is empty or full and if elements are present return the top element in the stack using templates. Also perform push and pop operation on the stack

class Stack {
  constructor(maxSize) {
    this.elements = [];
    this.maxSize = maxSize;
  }

  isEmpty() {
    return this.elements.length === 0;
  }

  isFull() {
    return this.elements.length === this.maxSize;
  }

  top() {
    if (this.isEmpty()) {
        throw new RangeError("Stack is empty");
    }
    return this.elements[this.elements.length - 1];
  }

  push(element) {
    if (this.isFull()) {
        throw new RangeError("Stack is full");
    }
    this.elements.push(element);
  }

  pop() {
    if (this.isEmpty()) {
        throw new RangeError("Stack is empty");
    }
    return this.elements.pop();
  }
}

try {
  const myStack = new Stack(5);
  
  // myStack.push(1);
  // myStack.push(2);
  // myStack.push(3);

  console.log("Stack is empty:", myStack.isEmpty());
  console.log("Stack is full:", myStack.isFull());
  console.log("Top element:", myStack.top());

  myStack.pop();
  console.log("Top element after pop:", myStack.top());

} catch (e) {
  console.error(e.message);
}
k