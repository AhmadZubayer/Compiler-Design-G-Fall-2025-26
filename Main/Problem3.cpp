#include "lab2.h"

void checkComment() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    bool isComment = false;
    
    if (s.length() >= 2) {
        if ((int)s[0] == 47 && (int)s[1] == 47) {
            isComment = true;
        } else if ((int)s[0] == 47 && (int)s[1] == 42) {
            if (s.length() >= 4 && (int)s[s.length()-2] == 42 && (int)s[s.length()-1] == 47) {
                isComment = true;
            }
        }
    }
    
    if (isComment) {
        cout << "Comment" << endl;
    } else {
        cout << "Not Comment" << endl;
    }
}