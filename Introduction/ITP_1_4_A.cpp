#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
    int a, b;  
    int d, r;
    double f;

    cin >> a >> b;

    d = a / b;
    r = a % b;
    f = 1.0 * a / b;

    printf("%d %d %.5lf\n", d,r,f);
    
    return 0;
}