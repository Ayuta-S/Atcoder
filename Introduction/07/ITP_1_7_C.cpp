#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <stack>
using namespace std;

int main(void){
    int r, c;

    cin >> r >> c;

    int **table = new int*[r];
    for (int i=0; i<r; i++) {
        table[i] = new int[c];
    }

    int **newTable = new int*[r+1];
    for (int i=0; i<r+1; i++) {
        newTable[i] = new int[c+1];
    }

    for (int i=0; i<r+1; i++) {
        for (int j=0; j<c+1; j++) {
            newTable[i][j] = 0;
        }
    }

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cin >> table[i][j];
            newTable[i][j] = table[i][j];
        }
    }
    
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            newTable[i][c] += table[i][j];
            newTable[r][c] += table[i][j];
        }
    }

    for (int j=0; j<c; j++) {
        for (int i=0; i<r; i++) {
            newTable[r][j] += table[i][j];
        }
    }

    for (int i=0; i<r+1; i++) {
        for (int j=0; j<c+1; j++) {
            cout << newTable[i][j];
            if (j<c) cout << " ";
        }
        cout << endl;
    }

    for (int i=0; i<r; i++) {
        delete[] table[i];
        delete[] newTable[i];
    }
    delete[] table;
    delete[] newTable;

    return 0;
}