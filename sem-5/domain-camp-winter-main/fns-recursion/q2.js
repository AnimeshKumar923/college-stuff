function removeElements(head, val) {
  let dummy = { val: -1, next: head };
  let current = dummy;

  while (current.next) {
      if (current.next.val === val) {
          current.next = current.next.next;
      } else {
          current = current.next;
      }
  }
  return dummy.next;
}
