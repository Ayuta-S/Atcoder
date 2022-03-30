#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

int main(void){
    int n;
    double m=0;
    double a=0;

    while (1) {
        cin >> n;
        if (n==0) break;

        int *s = new int[n];

        for (int i=0; i<n; i++) {
            cin >> s[i];
            m += s[i];
        }
        m = m / n;
        for (int i=0; i<n; i++) {
            a = (s[i] - m)* (s[i] - m);
        }
        a = a / n;
        a = sqrt(a);

        printf("%.4lf\n", a);
        delete[] s;
        m = a = 0;
    }
    
    return 0;
}

