class Node {
  constructor(value, next = null) {
    this.value = value;
    this.next = next;
  }
}

const list = new Node(1, new Node(2, new Node(3)));
let n = list;
while (n) {
  console.log(n.value);
  n = n.next;
}
