#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void){
    int n;
    int i;
    int x;

    i = 1;
    cin >> n;
    while (i <= n) {
        x = i;
        if ( x % 3 == 0) {
            cout << " " << i; 
        } else {
            while (x) {
                if (x % 10 == 3) {
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }
        } 
        i++;
    }
    cout << endl;
    return 0;
}