#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

int main(void){
    double x[2];
    double y[2];
    double z;

    cin >> x[0] >> x[1] >> y[0] >> y[1];

    z = sqrt(pow((x[0]-y[0]), 2) + pow((x[1]-y[1]), 2));

    printf("%.4lf", z);

    return 0;
}