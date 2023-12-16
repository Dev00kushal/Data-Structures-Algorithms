# Linked List Data Structure Implementation 

## Introduction
This repository contains a basic implementation of a singly linked list. The linked list is a versatile data structure with advantages over arrays.

## Operations Implemented
1. **Insertion at the Beginning (`prepend`)**
2. **Insertion at the End (`append`)**
3. **Traversal (`traverse`)**
4. **Search (`find`)**
5. **Deletion (`delete`)**

## Implementation Details
The C code is structured with two main components:
- `Node`: Represents a node in the linked list with a data field and a pointer to the next node.
- `LinkedList`: Implements the linked list operations.

## Code Example
```js
class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
  }

  // Add a new node to the end of the linked list
  append(value) {
    const newNode = new Node(value);
    if (!this.head) {
      this.head = newNode;
      return;
    }

    let current = this.head;
    while (current.next) {
      current = current.next;
    }

    current.next = newNode;
  }

  // Print the values of the linked list
  print() {
    let current = this.head;
    while (current) {
      console.log(current.value);
      current = current.next;
    }
  }
}

// Example usage:
const linkedList = new LinkedList();
linkedList.append(1);
linkedList.append(2);
linkedList.append(3);

linkedList.print();
```
