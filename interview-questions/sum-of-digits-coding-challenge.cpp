// Problem:  Sum of Digits | Coding Challenge
// Category: interview-questions
// Link:     https://coddy.tech/problems/sum-of-digits/solve
// Date:     2026-11-27

int sumOfDigits(int n) {
    // Write code here
    int digitSum = 0;
    while (n > 0) {
        digitSum += n % 10;
        n = n/10;
    }
    return digitSum;
}
