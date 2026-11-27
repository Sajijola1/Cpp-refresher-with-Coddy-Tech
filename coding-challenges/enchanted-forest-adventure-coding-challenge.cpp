// Problem:  Enchanted Forest Adventure | Coding Challenge
// Category: coding-challenges
// Link:     https://coddy.tech/challenges/enchanted_forest_adventure_cpp
// Date:     2026-11-27

#include <string>

using namespace std;
int navigateEnchantedForest(std::string path) {
    // Write code here
    int steps = 0;
    for (const char& letter : path) {
        if (letter == 'F') {
            steps++;
        }
        else if (letter == 'O') {
            break;
        }

        else if (letter == 'T') {
            steps++;
            break;            
        }
    }
    return steps;
}
