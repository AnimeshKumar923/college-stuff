class Node {
  constructor(value) {
      this.value = value;
      this.next = null;
      this.prev = null;
  }
}

function reverseList(head) {
  let current = head;
  let temp = null;

  while (current !== null) {
      temp = current.prev;
      current.prev = current.next;
      current.next = temp;

      current = current.prev;
  }

  if (temp !== null) {
      head = temp.prev;
  }

  return head;
}

function printList(head) {
  let current = head;
  let result = [];
  while (current !== null) {
      result.push(current.value);
      current = current.next;
  }
  console.log(result.join(' <-> '));
}

let n1 = new Node(1);
let n2 = new Node(2);
let n3 = new Node(3);
let n4 = new Node(4);

n1.next = n2;
n2.prev = n1;
n2.next = n3;
n3.prev = n2;
n3.next = n4;
n4.prev = n3;

console.log("Original List:");
printList(n1);

let reverse = reverseList(n1);

console.log("Reversed List:");
printList(reverse);
