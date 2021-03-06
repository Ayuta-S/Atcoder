#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <stack>
#include <vector>
using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;

    int **a = new int*[n];
    for(int i=0; i<n; i++) {
        a[i] = new int[m];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }

    int b[m];
    for (int j=0; j<m; j++) {
        cin >> b[j];
    }

    int c[n];
    for (int i=0; i<n; i++) {
        c[n] = 0;
        for (int j=0; j<m; j++) {
            c[n] += a[i][j]*b[j];
        }
        cout << c[n] << endl;
    }

    for (int i=0; i<n; i++) {
        delete[] a[i];
        a[i] = 0;
    }
    delete[] a;
    a=0;

    return 0;
}