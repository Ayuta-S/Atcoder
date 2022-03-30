#include <iostream>
#include <stdio.h>
#include <cctype>
#include <string>
using namespace std;

int main(void){
    string ch;

    for ()
    while (1) {
        cin >> ch;

        if (isalpha(ch)) {
            if (islower(ch)) {
                ch = toupper(ch);
            } else {
                ch = tolower(ch);
            }
        }

        cout << ch ;
        if (ch == ' ') cout << " ";
        if (ch == '.') break;
    }
    
    cout << endl;

    return 0;
}