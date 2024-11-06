class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class SinglyLinkedList {
  constructor() {
    this.head = null;
  }

  insert(data) {
    const newNode = new Node(data);
    if (!this.head) {
      this.head = newNode;
    } else {
      let current = this.head;
      while (current.next) {
        current = current.next;
      }
      current.next = newNode;
    }
  }

  delete(data) {
    if (!this.head) return;

    if (this.head.data === data) {
      this.head = this.head.next;
      return;
    }

    let current = this.head;
    let previous = null;
    
    while (current && current.data !== data) {
      previous = current;
      current = current.next;
    }

    if (current) {
      previous.next = current.next;
    }
  }

  

  printList() {
    let current = this.head;
    let output = '';
    while (current) {
      output += current.data;
      if (current.next) {
        output += ' -> ';
      }
      current = current.next;
    }
    console.log(output);
  }

  insertAtBeginning(data) {
    const newNode = new Node(data);
    if (!this.head) {
      this.head = newNode;
    } else {
      newNode.next = this.head;
      this.head = newNode;
    }
  }

  insertAtEnd(data) {
    const newNode = new Node(data);
    if (!this.head) {
      this.head = newNode;
    } else {
      let current = this.head;
      while (current.next) {
        current = current.next;
      }
      current.next = newNode;
    }
  }

  deleteFromBeginning() {
    if (!this.head) return;
    this.head = this.head.next;
  }

  deleteFromEnd() {
    if (!this.head) return;

    if (!this.head.next) {
      this.head = null;
      return;
    }
  }
}


const list = new SinglyLinkedList();
list.insert(10);
list.printList();
list.insert(20);
list.printList();
list.insert(30);

console.log("after insertion:");
list.printList();

list.delete(20);

console.log("after deletion:");
list.printList();
list.insert(15);
list.insert(54);
list.insert(32);
list.insert(68);
list.insert(98);
list.insert(65);
list.insert(987);
list.printList();

list.deleteFromBeginning();
list.printList();