#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <stack>
using namespace std;

int main(void){
    int n;
    int x[4][3][10] = {};
    int b, f, r, v;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> b >> f >> r >> v;
        
        x[b-1][f-1][r-1] += v;
        
    }

    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<10; k++){
                cout << " " << x[i][j][k];
            }
            cout << endl;
        }
        if (i < 3) cout << "####################" << endl;
    }

    return 0;
}