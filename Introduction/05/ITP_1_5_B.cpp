#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void){
    int H ,W;
    
    while(1){
        cin >> H >> W;

        if (H==0 && W==0) break;

        for(int i=1; i<=H; i++){
            for (int j=1; j<=W; j++){
                if ((j == 1 || j == W) || (i == 1 || i == H)) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
            cout << endl;
        }

        cout << endl;
    }
    return 0;
}