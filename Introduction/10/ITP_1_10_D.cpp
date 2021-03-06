#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

double mincofsxy(vector<int> x, vector<int> y, int p, int n) {
    double D_xy = 0;

    for (int i=0; i<n; i++) {
        D_xy += pow(abs(x[i]-y[i]), p);
    }

    D_xy = pow(D_xy, (double)1/p);

    return D_xy;

}

int main(void){
    int n;
    vector<int> x;
    vector<int> y;
    double D_xy[4] = {};

    cin >> n;
    x.resize(n);
    y.resize(n);

    for (int i=0; i<n; i++) {
        cin >> x[i];
    }

    for (int i=0; i<n; i++) {
        cin >> y[i];
    }

    D_xy[0] = mincofsxy(x, y, 1, n);
    D_xy[1] = mincofsxy(x, y, 2, n);
    D_xy[2] = mincofsxy(x, y, 3, n);
    D_xy[3] = mincofsxy(x, y, 1000, n);

    printf("%.8lf\n", D_xy[0]);
    printf("%.8lf\n", D_xy[1]);
    printf("%.8lf\n", D_xy[2]);
    printf("%.8lf\n", D_xy[3]);
    
    return 0;
}