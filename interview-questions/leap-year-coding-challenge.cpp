// Problem:  Leap Year | Coding Challenge
// Category: interview-questions
// Link:     https://coddy.tech/problems/leap-year/solve
// Date:     2026-11-27

bool isLeapYear(int year) {
    // Write code here
    bool result = false;

    if (year % 4 == 0) {
        if (year % 100 == 0){
            if (year % 400 == 0) {
                result = true;
            }
            else {}
        }
        else{
            result = true;
        }
    }
    return result;
}
