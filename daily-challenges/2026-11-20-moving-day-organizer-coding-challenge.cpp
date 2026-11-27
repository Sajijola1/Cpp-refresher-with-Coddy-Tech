// Problem:  Moving Day Organizer | Coding Challenge
// Category: daily-challenges
// Link:     https://coddy.tech/challenges/moving_day_organizer_cpp?daily=true
// Date:     2026-11-27

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Task 1: Check if box number is divisible by 15
    int boxNumber;
    cin >> boxNumber;
    
    // TODO: Check if boxNumber is divisible by 15
    if (boxNumber % 15 == 0) {
    // Print "Fragile" if divisible by 15, otherwise print "Regular"
        cout << "Fragile" << endl;
    }

    else {
        cout << "Regular" << endl;
    }
    
    
    // Task 2: Replace each item with next heavier item
    int n;
    cin >> n;  // Number of items
    vector<int> weights(n);
    
    // Read all item weights
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    
    // TODO: For each item, find the next heavier item that appears later
    // Replace with that weight, or -1 if no heavier item exists
    // Store results in a new vector or modify the existing one
    vector<int> new_weights;

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 1; j < n-i; j++) {
            if (weights[i] < weights[i+j]) {
                new_weights.push_back(weights[i+j]);
                found = true;
                break;
            }
        }
        
        if (!found) {
            new_weights.push_back(-1);
        } 
    } 
    
    // Print the transformed list (space-separated)
    for (int i = 0; i < n; i++) {
        cout << new_weights[i] << " ";
    }
    
    // Task 3: Calculate parking fee
    int hours;
    cin >> hours;  // Number of hours parked
    
    // TODO: Calculate total fee
    // First 3 hours: $5 per hour
    // Additional hours: $3 per hour
    // Print the total fee
    int fee = 0;
    
    if (hours > 3) {
        fee = 3*5 + (hours-3)*3; // hours * rate
    }
    
    else {
        fee = hours * 5;
    }
    cout << endl << fee;
    return 0;
}
