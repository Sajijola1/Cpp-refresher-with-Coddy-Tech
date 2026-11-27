// Problem:  Factorial | Coding Challenge
// Category: interview-questions
// Link:     https://coddy.tech/problems/factorial/solve
// Date:     2026-11-27

int factorial(int n) {
    // Write code here
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}
