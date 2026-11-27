// Problem:  Fibonacci Number | Coding Challenge
// Category: interview-questions
// Link:     https://coddy.tech/problems/fibonacci-number/solve
// Date:     2026-11-27

int fib(int n) {
    // Write code here
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fib(n-2) + fib(n-1);
    }

}
