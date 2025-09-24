### 🛠️ Experiment 15: Recursion

-----

### **Aim**

To understand and implement **recursion** in C++ by solving problems like:

1.  Sum of first N natural numbers
2.  Factorial of a number
3.  Reversing a number
4.  Reversing a string

-----

### **Objectives**

  * Learn the concept of recursion and its applications.
  * Implement recursive functions for mathematical and string operations.
  * Compare recursion with iteration in terms of memory, time, and readability.
  * Understand real-life and industrial applications of recursion.

-----

### **Algorithm**

The following algorithms outline the recursive approach for each problem.

#### 1\. Sum of N Numbers

1.  **Function `sumUp(n)`:**
2.  **Base Case:** If `n` is `0`, return `0`.
3.  **Recursive Case:** Return `n + sumUp(n - 1)`.
4.  **Main:** Read a number `num`. If `num` is negative, display an error. Otherwise, call `sumUp(num)` and print the result.

#### 2\. Factorial of a Number

1.  **Function `factorial(n)`:**
2.  **Base Case:** If `n` is `0`, return `1`.
3.  **Recursive Case:** Return `n * factorial(n - 1)`.
4.  **Main:** Read a number `num`. If `num` is negative, display an error. Otherwise, call `factorial(num)` and print the result.

#### 3\. Reverse a Number

1.  **Function `reverseNumber(n)`:**
2.  **Base Case:** If `n` is `0`, return.
3.  **Recursive Case:**
      * Print the last digit: `n % 10`.
      * Call `reverseNumber(n / 10)` to process the rest of the number.
4.  **Main:** Read a number, call `reverseNumber()`, and print a newline.

#### 4\. Reverse a String

1.  **Function `reverseString(str)`:**
2.  **Base Case:** If the string is empty, return.
3.  **Recursive Case:**
      * Get the last character of the string: `str.substr(str.length() - 1)`.
      * Call `reverseString()` with the rest of the string: `str.substr(0, str.length() - 1)`.
      * Print the last character after the recursive call returns.
4.  **Main:** Read a string, call `reverseString()`, and print a newline.

-----

### **Tools Used**

  * **Language**: C++
  * **Compiler**: g++
  * **Editor**: VS Code

-----

### **Theory**

#### **Definition**

**Recursion** is a programming technique where a function calls itself, either directly or indirectly, to solve a problem. It works by breaking down a large problem into smaller, identical subproblems until a simple, easily solvable **base case** is reached.

#### **Key Components of a Recursive Function**

  * **Base Case**: The condition that stops the recursion. Without a base case, the function would call itself indefinitely, leading to a **stack overflow**.
  * **Recursive Case**: The part of the function where it calls itself with a modified input that moves closer to the base case.

#### **How Recursion Works (The Call Stack)**

Each time a function is called, it's placed on the **call stack**. When a recursive function calls itself, a new instance is pushed onto the stack. This process continues until the base case is hit. Once the base case returns a value, the stack begins to **unwind**, with each function instance returning a value to the one below it until the initial call completes.

**Example: `sumUp(3)`**

  * `sumUp(3)` calls `sumUp(2)`
  * `sumUp(2)` calls `sumUp(1)`
  * `sumUp(1)` returns `1` (Base Case)
  * `sumUp(2)` receives `1`, calculates `2 + 1`, and returns `3`
  * `sumUp(3)` receives `3`, calculates `3 + 3`, and returns `6`

#### **Advantages of Recursion**

  * **Simplicity**: Can lead to cleaner and more elegant code for problems with a recursive structure (e.g., fractals, tree traversals).
  * **Clarity**: The code often mirrors the mathematical definition of the problem.

#### **Disadvantages of Recursion**

  * **Memory Overhead**: Each function call uses memory on the call stack, which can lead to a **stack overflow** for large inputs.
  * **Performance**: Can be slower than iteration due to the overhead of function calls and stack management.

-----

### **Flowcharts**

#### 1\. Sum of N Numbers

```mermaid
graph TD
    A[Start] --> B[Input n];
    B --> C{n <= 1?};
    C -- Yes --> D[Return n];
    C -- No --> E[Return n + sumUp(n-1)];
    D --> F[Print result];
    E --> F;
    F --> G[End];
```

#### 2\. Factorial

```mermaid
graph TD
    A[Start] --> B[Input n];
    B --> C{n <= 1?};
    C -- Yes --> D[Return 1];
    C -- No --> E[Return n * factorial(n-1)];
    D --> F[Print result];
    E --> F;
    F --> G[End];
```

#### 3\. String Reversal

```mermaid
graph TD
    A[Start] --> B[Input string str];
    B --> C{Is str empty or length = 1?};
    C -- Yes --> D[Return str];
    C -- No --> E[Reverse substring(1..n-1)];
    E --> F[Append first char to end];
    F --> G[Print result];
    D --> G;
    G --> H[End];
```

#### 4\. Number Reversal

```mermaid
graph TD
    A[Start] --> B[Input number n];
    B --> C{n == 0?};
    C -- Yes --> D[Return 0];
    C -- No --> E[last_digit = n % 10];
    E --> F[rev = reverse(n / 10)];
    F --> G[reversed_number = rev*10 + last_digit];
    G --> H[Print result];
    D --> H;
    H --> I[End];
```

-----

### **Differences Between Recursion and Iteration**

| Feature | Recursion | Iteration |
| :--- | :--- | :--- |
| **Memory Usage** | Higher; uses a call stack for each function call. | Lower; uses a fixed number of loop variables. |
| **Time Complexity** | Can be higher due to function call overhead. | Generally lower, as there's no function call overhead. |
| **Readability** | Easier for problems with a natural recursive structure. | Can be complex for deeply nested or hierarchical problems. |
| **Termination** | Requires a **base case** to stop. | Requires a **loop condition** to stop. |
| **Use Case** | Ideal for tree/graph traversals, fractals, backtracking. | Ideal for simple counting, array processing, and fixed repetitions. |

-----

### **Industrial Applications of Recursion**

  * **Sorting Algorithms**: Quicksort and Mergesort use a "divide and conquer" recursive approach.
  * **Data Structures**: Used for traversing and manipulating trees and graphs.
  * **Parsing**: Compilers and interpreters use recursion to parse language syntax.
  * **Computer Graphics**: Generating fractals and other complex patterns.
  * **Networking**: DNS queries often use recursion to find IP addresses.
