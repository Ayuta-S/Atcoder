#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <stack>
using namespace std;

int main(void){
    int n;
    char c;
    int x;
    int table[4][13];

    cin >> n;

    for (int i=0; i<4; i++) {
        for (int j=0; j<13; j++) {
            table[i][j]=100;
        }
    }

    for (int i=0; i<n; i++) {
        cin >> c >> x;
        switch(c){
            case 'S':
                table[0][x-1] = x;
                break;
            case 'H':
                table[1][x-1] = x;
                break;
            case 'C':
                table[2][x-1] = x;
                break;
            case 'D':
                table[3][x-1] = x;
                break;
            default:
                break;
        }
    }

    for (int i=0; i<13; i++) {
        if (table[0][i] == 100) {
            cout << "S " << i+1 << endl;
        }  
    }

    for (int i=0; i<13; i++) {
       if (table[1][i] == 100) {
            cout << "H " << i+1 << endl;
        } 
    }

    for (int i=0; i<13; i++) {
       if (table[2][i] == 100) {
            cout << "C " << i+1 << endl;
        }
    }

    for (int i=0; i<13; i++) {
        if (table[3][i] == 100){
            cout << "D " << i+1 << endl;
        }
    }

    return 0;
}