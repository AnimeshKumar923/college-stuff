class Node {
  constructor(value) {
      this.value = value;
      this.left = null;
      this.right = null;
  }
}

function insert(root, value) {
  if (root === null) {
      return new Node(value);
  }

  if (value < root.value) {
      root.left = insert(root.left, value);
  } else {
      root.right = insert(root.right, value);
  }
  return root;
}

function buildBalancedBST(arr) {
  if (arr.length === 0) return null;

  let mid = Math.floor(arr.length / 2);
  let root = new Node(arr[mid]);

  root.left = buildBalancedBST(arr.slice(0, mid));
  root.right = buildBalancedBST(arr.slice(mid + 1));

  return root;
}

const sortedArray = [10, 20, 30, 40, 50, 60, 70];
const root = buildBalancedBST(sortedArray);

console.log(root);
