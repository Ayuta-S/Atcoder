#include <iostream>
using namespace std;

int main(void){
    int W, H;
    int x, y, r;

    cin >> W >> H >> x >> y >> r;

    if ((W >= (x+r)) && (H >= (y+r)) && ((x-r) >= 0) && ((y-r) >= 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}