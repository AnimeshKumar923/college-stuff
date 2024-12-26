function isPalindrome(head) {
  let slow = head, fast = head;
  const stack = [];

  while (fast && fast.next) {
      stack.push(slow.val);
      slow = slow.next;
      fast = fast.next.next;
  }
  if (fast) slow = slow.next; // Skip middle element for odd-length lists.

  while (slow) {
      if (stack.pop() !== slow.val) return false;
      slow = slow.next;
  }
  return true;
}
