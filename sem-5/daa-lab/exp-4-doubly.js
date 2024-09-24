class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
    this.prev = null;
  }
}

class DoublyLinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
  }

  // insert at the end
  insert(data) {
    const newNode = new Node(data);
    if (!this.head) {
      this.head = this.tail = newNode;
    } else {
      this.tail.next = newNode;
      newNode.prev = this.tail;
      this.tail = newNode;
    }
  }

  delete(data) {
    if (!this.head) return;

    if (this.head.data === data) {
      this.head = this.head.next;
      if (this.head) {
        this.head.prev = null;
      } else {
        this.tail = null;
      }
      return;
    }

    let current = this.head;
    while (current && current.data !== data) {
      current = current.next;
    }

    if (current) {
      if (current.next) {
        current.next.prev = current.prev;
      } else {
        this.tail = current.prev;
      }
      if (current.prev) {
        current.prev.next = current.next;
      }
    }
  }

  printList() {
    let current = this.head;
    let output = '';
    while (current) {
      output += current.data;
      if (current.next) {
        output += ' <-> ';
      }
      current = current.next;
    }
    console.log(output);
  }
}

const list = new DoublyLinkedList();
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