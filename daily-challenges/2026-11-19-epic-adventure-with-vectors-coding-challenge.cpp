// Problem:  Epic Adventure with Vectors | Coding Challenge
// Category: daily-challenges
// Link:     https://coddy.tech/challenges/epic_adventure_with_vectors_cpp?daily=true
// Date:     2026-11-27

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize your vector here
    vector<int> epicarid = {1, 2, 3, 4, 5};
    // Print its elements separated by spaces

    for (const int& num : epicarid) {
        cout << num << " ";
    }
    return 0;
}
