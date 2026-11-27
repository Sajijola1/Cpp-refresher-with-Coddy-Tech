// Problem:  Reverse a String | Coding Challenge
// Category: interview-questions
// Link:     https://coddy.tech/problems/reverse-a-string/solve
// Date:     2026-11-27

#include <string>
using namespace std;

string reverseString(string s) {
    // Write code here
    string result;
    for (int i = (s.size() - 1); i >= 0; i-- ){
        result += s[i];
    }

    return result;
}
