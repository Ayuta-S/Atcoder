#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <stack>
using namespace std;

int main(void){
    int n, x;
    int count = 0;

    while (1) {
        cin >> n  >> x;
        if (n == 0 && x == 0) break;

        for (int i=1; i<=n-2; i++) {
            for (int j=i+1; j<=n-1; j++) {
                for (int k=j+1; k<=n; k++) {
                    if (i+j+k == x) {
                        count++;
                    }
                }
            }
        }

        cout << count << endl;
        count = 0;
    }



    return 0;
}