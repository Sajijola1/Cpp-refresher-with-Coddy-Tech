// Problem:  Find the Largest Number | Coding Challenge
// Category: interview-questions
// Link:     https://coddy.tech/problems/find-the-largest-number/solve
// Date:     2026-11-27

#include <vector>
using namespace std;

int findMax(vector<int> nums) {
    // Write code here
    int max = -1e9;
    
    for (const int& num : nums) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}
