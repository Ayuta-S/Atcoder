#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void){
    double r;

    cin >> r;

    printf("%.5lf %.5lf", r*r*M_PI, 2*r*M_PI);
    
    return 0;
}