#include <stdio.h>
#include <iostream>
using namespace std;

int n;
int a[25];
int K;

int main(void) {
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    cin >> K;

    bool result = false;

    for  (int bit=0; bit < (1<<n); bit++) {
        int sum=0;
        for (int i=0; i<n; i++) {
            if (bit & (1<<i)) {
                sum += a[i];
            }
        }

        if(sum==K) result=true;
    }

    if(result) cout <<"Yes"<<endl;
    else cout << "No" << endl;

    return 0;
}
