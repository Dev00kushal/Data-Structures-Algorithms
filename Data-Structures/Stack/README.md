# Stack

A stack is a linear data structure that follows the LIFO (Last-In, First-Out) or FILO (First-In, Last-Out) principle. It can be visualized as a stack of plates, where the last plate placed is the first one to be removed.

## Visualizing a Stack

A stack can be visualized as follows:

Imagine a stack of plates, where new plates are added on top. The plate on the top represents the most recently added element, and removing a plate involves taking the one from the top.

## Basic Operations

Push: Adding an element to the stack.
Pop: Removing the most recently added element from the stack.
Peek/Top: Viewing the top element without removing it.
isEmpty: Checking if the stack is empty.
Size: Determining the number of elements in the stack.
isFull : Checking if the stack is full or not.

## Stack Implementation

The stack can be implemented using arrays or linked lists. Ensure efficient time complexity for basic operations to maintain its usefulness.

```typescript
class Stack<T> {
  private items: T[] = [];

  // Push: Add an element to the stack
  push(element: T): void {
    this.items.push(element);
  }

  // Pop: Remove the most recently added element
  pop(): T | undefined {
    return this.items.pop();
  }

  // Peek/Top: View the top element without removing it
  peek(): T | undefined {
    return this.items[this.items.length - 1];
  }

  // isEmpty: Check if the stack is empty
  isEmpty(): boolean {
    return this.items.length === 0;
  }

  // Size: Get the number of elements in the stack
  size(): number {
    return this.items.length;
  }
}

// Example Usage
const stack = new Stack<number>();

// Push elements onto the stack
stack.push(5);
stack.push(10);
stack.push(15);

// Pop the top element
const topElement = stack.pop();

// Peek at the top element
const peekElement = stack.peek();

// Check if the stack is empty
const isEmpty = stack.isEmpty();

// Get the size of the stack
const stackSize = stack.size();
```

# Real-World Use Case: Undo/Redo Functionality in a Text Editor

In the context of a text editor application, a stack can be employed to implement a robust undo/redo functionality. This feature is crucial for users who want to revert changes or redo actions while editing a document.

## How It Works

1. **Initialization:**
   - Two stacks are maintained: one for undo operations and another for redo operations.
   - Initially, both stacks are empty.

2. **User Interaction:**
   - Every user action that modifies the document (typing, deleting, formatting, etc.) is recorded and pushed onto the undo stack.

3. **Undo Operation:**
   - When the user requests to undo an action, the application pops the most recent action from the undo stack and applies the reverse of that action to the document.
   - The undone action is then pushed onto the redo stack.

4. **Redo Operation:**
   - If the user decides to redo an undone action, the application pops the most recent action from the redo stack and reapplies it to the document.
   - The redone action is then pushed back onto the undo stack.

## Benefits

- **User-Friendly:**
  - Users can easily navigate through their editing history, making the application more user-friendly.

- **Error Recovery:**
  - In case of accidental deletions or changes, users can quickly revert to a previous state.

- **Efficiency:**
  - The LIFO nature of the stack simplifies the management of undo and redo operations, ensuring efficiency and simplicity in implementation.

## Implementation Example

```typescript
// Create stacks for undo and redo
const undoStack = new Stack<Action>();
const redoStack = new Stack<Action>();

// User types some text (an action)
const userAction = new EditAction("Insert text");
undoStack.push(userAction);

// User decides to undo
const undoneAction = undoStack.pop();
undoneAction.undo(); // Revert the action
redoStack.push(undoneAction);
```