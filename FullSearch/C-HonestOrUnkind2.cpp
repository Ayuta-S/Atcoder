#include <stdio.h>
#include <iostream>
using namespace std;

int N; //総人数
int A[15]; //人iの証言の個数
int x[15][15]; //
int y[15][15];


int main(void) {
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> A[i];
        for (int j=0; j<A[i]; j++) {
            cin >> x[i][j];
            cin >> y[i][j];
        }
    }

    int count;
    int max=0;
    bool ok;
    for (int bit=0; bit < (1<<N); bit++) {
        count=0;
        ok=true;
        for (int i=0; i<N; i++) {
            if ((bit & (1<<i))) {
                count++;
                for (int j=0; j<A[i]; j++) {
                    if (y[i][j]) {
                        if (!(bit & (1<<(x[i][j]-1)))) ok = false;
                    }
                    else {
                        if (bit & (1<<(x[i][j]-1))) ok = false;
                    }
                }
            }
        }
        if ((ok) && (max < count)) max = count;
    }

    cout << max << endl;    
    return 0;
}
