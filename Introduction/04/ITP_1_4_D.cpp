#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void){
    int n;
    int a_i;
    long long min, max, sum=0;

    cin >> n;

    for (int i=1; i<=n; i++) {
        cin >> a_i;

        if (i==1) min = max = a_i;
        if (min > a_i) min = a_i;
        if (max < a_i) max = a_i;
        sum += a_i;
    }

    cout << min << " " << max << " " << sum << endl;
    return 0;
}