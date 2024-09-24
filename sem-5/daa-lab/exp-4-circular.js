class Node {
  constructor(value) {
    this.data = value;
    this.next = null;
  }
}

class CircularLinkedList {
  constructor() {
    this.head = null;
  }

  insertAtBeginning(value) {
    const newNode = new Node(value);
    if (!this.head) {
      this.head = newNode;
      this.head.next = this.head;
    } else {
        let temp = this.head;
        while (temp.next !== this.head) {
          temp = temp.next;
        }
        newNode.next = this.head;
        temp.next = newNode;
        this.head = newNode;
    }
  }

  insertAtEnd(value) {
      const newNode = new Node(value);
      if (!this.head) {
          this.head = newNode;
          this.head.next = this.head;
      } else {
          let temp = this.head;
          while (temp.next !== this.head) {
              temp = temp.next;
          }
          temp.next = newNode;
          newNode.next = this.head;
      }
  }

  deleteAtBeginning() {
      if (!this.head) return;
      if (this.head.next === this.head) {
          this.head = null;
      } else {
          let temp = this.head;
          while (temp.next !== this.head) {
            temp = temp.next;
          }
          temp.next = this.head.next;
          this.head = this.head.next;
      }
  }

  deleteAtEnd() {
      if (!this.head) return;
      if (this.head.next === this.head) {
          this.head = null;
      } else {
          let temp = this.head;
          while (temp.next.next !== this.head) {
              temp = temp.next;
          }
          temp.next = this.head;
      }
  }

  display() {
      if (!this.head) return;
      let temp = this.head;
      do {
          console.log(temp.data);
          temp = temp.next;
      } while (temp !== this.head);
  }
}

const cll = new CircularLinkedList();

cll.insertAtBeginning(10);
cll.display();
cll.insertAtBeginning(20);
cll.display();
cll.insertAtEnd(30);
cll.display();
cll.insertAtEnd(40);

console.log("Circular Linked List:");
cll.display();

cll.deleteAtBeginning();
cll.deleteAtEnd();

console.log("After Deletion:");
cll.display();