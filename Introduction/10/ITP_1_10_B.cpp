#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

int main(void){
    double a, b, c;
    double S, L, h;

    cin >> a >> b >> c;
    c = c * M_PI / 180.0;

    S = a * b * sin(c) / 2;
    L = a + b + sqrt(a*a+b*b-2*a*b*cos(c));
    h = b * sin(c);
    
    printf("%.5lf\n", S);
    printf("%.5lf\n", L);
    printf("%.5lf\n", h);

    return 0;
}

