# Loops in Programming

## Overview

This readme provides a key concepts related to loops in programming.

## While Loop

A while loop is a control flow statement that allows code to be executed repeatedly based on a given boolean condition. The loop continues as long as the condition is true.

### While Loop Example

```python
# Initialization
x = 0

# Loop Execution
while x < 5:
    print(x)
    x += 1
```

## For Loop

A for loop is another type of control flow statement that iterates over a sequence (such as a list(Arrays), tuple(Set), or string) and executes code for each element in the sequence

```python
# Loop Execution
for element in ["a", "b", "c"]:
    print(element)
```

## Loop Control Statements

Loop control statements are used to alter the normal flow of loops. The two common statements are break and continue. break terminates the loop, and continue skips the rest of the code in the current iteration and moves to the next one.

```python
# Loop Execution
for num in range(10):
    if num == 5:
        break  # terminates the loop when num is 5
    elif num % 2 == 0:
        continue  # skips even numbers
    print(num)
```

## Nested Loops

Nested loops are loops inside another loop. They are useful for working with two-dimensional data structures or solving problems that require multiple levels of iteration.

```python
# Loop Execution
for i in range(3):
    for j in range(2):
        print(i, j)
```
