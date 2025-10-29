#include "lab2.h"

void findOperator() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int arrOperators[6] = {37, 42, 43, 45, 47, 61}; // %, *, +, -, /, =
    bool found = false;
    
    for (int i = 0; i < s.length(); i++) {
        int a = (int)s[i];
        for (int j = 0; j < 6; j++) {
            if (a == arrOperators[j]) {
                cout << "operator: " << s[i] << endl;
                found = true;
            }
        }
    }
    
    if (!found) {
        cout << "No operators found" << endl;
    }
}