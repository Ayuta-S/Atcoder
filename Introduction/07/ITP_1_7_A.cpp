#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <stack>
using namespace std;

int main(void){
    int m, f, r;
    int sum;

    while (1) {
        cin >> m >> f >> r;
        sum = m + f;

        if (m==-1 && f==-1 && r==-1) break;

        if ( m==-1 || f==-1) {
            cout << "F" << endl;
        } else if (sum >= 80) {
            cout << "A" << endl;
        } else if ( 65 <= sum && sum < 80) {
            cout << "B" << endl;
        } else if ( 50 <= sum && sum < 65) {
            cout << "C" << endl;
        } else if ( 30 <= sum && sum < 50) {
            if (r >= 50) {
                cout << "C" << endl;
            } else {
                cout << "D" << endl;
            }
        } else {
            cout << "F" << endl;
        }
    }

    return 0;
}