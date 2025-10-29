#include "lab2.h"

void checkNumeric() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    bool isNumeric = true;
    for (int i = 0; i < s.length(); i++) {
        if (!(s[i] >= '0' && s[i] <= '9')) {
            isNumeric = false;
            break;
        } 
    }
    
    if (isNumeric) {
        cout << "numeric constant" << endl;
    } else {
        cout << "not numeric" << endl;
    }
}