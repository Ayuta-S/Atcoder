#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

class Dice {
    private:
    int x[6];
    int i;
    int aboveNumber;

    public:

    Dice () {}

    void setX (int n, int i) {
        x[i] = n;
    }

    void init () {
        i = 0;
        aboveNumber = x[i];
    }

    void roll (char c) {
        switch (c) {
            case 'S':
                i += 1;
                aboveNumber = x[i];
        }
    }
};

int main(void){
    Dice dice;
    int n;

    for (int i=0; i<6; i++) {
        cin >> n;
        dice.setX(n, i);
    }


    return 0;
}