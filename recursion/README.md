# Recursive Programming

## Overview

This readme provides a visual explanation of key concepts related to recursion, presented in tables for clarity.

## Recursion

Recursion is a programming concept where a function calls itself in order to solve a problem. It involves breaking down a problem into smaller subproblems and solving each subproblem. The process continues until a base case is reached, at which point the solutions to the subproblems are combined to solve the original problem.

## Call Stack

The call stack is a data structure used by a program to manage the sequence of function calls. Each time a function is called, a new frame is added to the top of the call stack. When a function completes, its frame is removed. This stack-like structure allows the program to keep track of its execution flow.

### Call Stack Example

| Stack Frame | Function       |
|-------------|----------------|
| Frame 3     | main()         |
| Frame 2     | factorial(3)   |
| Frame 1     | factorial(2)   |
| Frame 0     | factorial(1)   |

## StackOverflow

StackOverflow occurs when the call stack exceeds its maximum capacity. This usually happens due to an infinite or excessively deep recursion, where the base case is not reached, causing the stack to overflow. It leads to a runtime error and program termination.

## Base Case

The base case in recursion is the condition that stops the recursive process. It is the simplest form of the problem that can be solved directly without further recursion. A well-defined base case is crucial to prevent infinite recursion and ensure the termination of the recursive algorithm.

### Base Case Example

| Input (n) | Output        |
|------------|---------------|
| 0          | 1             |
| 1          | 1             |
| 2          | 2 * factorial(1) |
| 3          | 3 * factorial(2) |
| ...        | ...           |

## Example Code

```python
def factorial(n):
    # Base case
    if n == 0 or n == 1:
        return 1
    # Recursive case
    else:
        return n * factorial(n-1)

# Example usage
result = factorial(5)
print("Factorial of 5:", result)
