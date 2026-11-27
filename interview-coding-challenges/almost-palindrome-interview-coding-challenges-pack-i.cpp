// Problem:  Almost Palindrome | Interview Coding Challenges - Pack I
// Category: interview-coding-challenges
// Link:     https://coddy.tech/journeys/cpp/interview_coding_challenges__pack_i/almost_palindrome
// Date:     2026-11-27

#include <string>
using namespace std;

bool isAlmostPalindrome(string s) {
    // Write code here
    
    // First reverse the input string
    string reversed;
    for (int i = (s.size() - 1); i >= 0; i--) {
        reversed.push_back(s[i]);
    }

    // Now let's check the differences between the original
    // string and the reversed version
    int diff = 0;
    bool almostPal = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != reversed[i]) {
            diff += 1;
        }
    }

    // Now check if we have more than two differences
    if (diff > 2) {
        almostPal = false;
    }
    return almostPal;
}

