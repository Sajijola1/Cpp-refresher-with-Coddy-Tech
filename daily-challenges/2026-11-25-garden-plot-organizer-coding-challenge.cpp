// Problem:  Garden Plot Organizer | Coding Challenge
// Category: daily-challenges
// Link:     https://coddy.tech/challenges/garden_plot_organizer_cpp?daily=true
// Date:     2026-11-27

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Read plant names line by line until the last line, which is the target length
    vector<string> plants;
    int targetLength = 0;
    string line;
    while (getline(cin, line)) {
        // if the final input is not empty => !line.empty() and
        // is a digit => line.find_first_not_of("0123456789") == string::npos)
        if (!line.empty() && line.find_first_not_of("0123456789") == string::npos) {
            targetLength = stoi(line);  // the final line: the target length (an integer)
            break;
        }
        // Add the name of the plant to the plants vector
        plants.push_back(line);
    }
    
    // TODO: Sort the plants by their length (shortest to longest)
    // Hint: use stable_sort with a comparator so names of equal length keep their input order
    stable_sort(plants.begin(), plants.end(), [](const string& a, const string& b)
    {
        return a.length() < b.length();
    });
    
    // TODO: Print each sorted plant name on its own line
    int count = 0;
    for (const string& plant : plants) {
        cout << plant << endl;

        // count the number of plants with the target length
        if (plant.length() == targetLength) {
            count++;
        }
    }
    
    // TODO: Count how many plants have names with exactly the target length
    // DONE: See for loop above
    
    // TODO: Print the count on its own line
    cout << count << endl;
    
    return 0;
}
