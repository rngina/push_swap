# push_swap

The **push_swap** project is a fundamental algorithm challenge where the objective is to sort a set of integers using two stacks and a predefined set of instructions in the *C* language. The project aims to develop skills in C programming, algorithmic complexity, and the implementation of basic sorting algorithms.

## Objectives

Writing a sorting algorithm is a crucial milestone in a developer's journey, providing insights into the concept of algorithmic complexity. Sorting algorithms and their efficiency are common topics in job interviews, making this project a valuable opportunity to explore these concepts.

The primary learning objectives of this project include:

- **Rigor**: Implementing a precise and correct solution.
- **Use of C**: Leveraging the C programming language to build the solution.
- **Basic Algorithms**: Employing fundamental sorting algorithms with a focus on their complexity.

## The Challenge

### The Rules

1. You have 2 stacks named *a* and *b*.
2. At the beginning:
   - Stack *a* contains a random amount of negative and/or positive numbers (non-duplicated).
   - Stack *b* is empty.
3. The goal is to sort numbers in ascending order into stack *a* using the provided operations.

### Supported Operations

- `sa` (*swap a*): Swap the first 2 elements at the top of stack *a*.
- `sb` (*swap b*): Swap the first 2 elements at the top of stack *b*.
- `ss`: *sa* and *sb* at the same time.
- `pa` (*push a*): Take the first element at the top of *b* and put it at the top of *a*.
- `pb` (*push b*): Take the first element at the top of *a* and put it at the top of *b*.
- `ra` (*rotate a*): Shift up all elements of stack *a* by 1.
- `rb` (*rotate b*): Shift up all elements of stack *b* by 1.
- `rr`: *ra* and *rb* at the same time.
- `rra` (*reverse rotate a*): Shift down all elements of stack *a* by 1.
- `rrb` (*reverse rotate b*): Shift down all elements of stack *b* by 1.
- `rrr`: *rra* and *rrb* at the same time.

## Project Guidelines

- **Makefile**: Provide a *Makefile* that compiles your source files without relinking.
- **No Global Variables**: Do not use global variables in your implementation.
- **Executable**: Write a program named *push_swap* that takes the stack *a* as a list of integers.
- **Output**: Display the smallest list of instructions possible to sort the stack *a*, with the
  smallest number at the top.
- **Instruction Separation**: Separate instructions by a newline character (`\n`) and nothing else.
- **Error Handling**: In case of an error, display "Error" followed by a newline on the standard error. Errors include non-integer arguments, arguments exceeding integer limits, or duplicates.
- **Empty Input**: If no parameters are specified, the program must not display anything and return to the prompt.

## Getting Started

To compile this project, use the provided *Makefile*:

```bash
make
```

To run:

```bash
./push_swap <list_of_integers>
```
