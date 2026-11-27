// Problem:  Merge Sort | Interview Coding Challenges - Pack I
// Category: interview-coding-challenges
// Link:     https://coddy.tech/journeys/cpp/interview_coding_challenges__pack_i/merge_sort
// Date:     2026-11-27

#include <vector>
#include <algorithm>
using namespace std;

vector<int> mergeSort(vector<int> a1, vector<int> a2) {
    // Write code here
    for (int i = 0; i < a2.size(); i++) {
        a1.push_back(a2[i]);
    }
    sort(a1.begin(), a1.end(), [](int a, int b) {
        return a < b;
        }
    );
    return a1;
}
