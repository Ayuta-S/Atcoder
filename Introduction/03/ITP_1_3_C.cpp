#include <iostream>
using namespace std;

int main(void){
    int x, y;
    int t;

    while(1) {
        cin >> x;
        cin >> y;

        if (x == 0 && y == 0) break;
        
        if (x < y) {
            cout << x << " " << y << endl;
        } else {
            cout << y << " " << x << endl;
        }
    }
    
    return 0;
}