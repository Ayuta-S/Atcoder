#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void){
    int a,b;
    char op;

    while(1){
        cin >> a >> op >> b;

        if (op == '?') break;

        switch (op){
            case '+':
                cout << a+b << endl;
                break;
            case '-':
                cout << a-b << endl;
                break;
            case '*':
                cout << a*b << endl;
                break;
            case '/':
                cout << a/b << endl;
                break;
            default:
                break;
        }
    }    
    return 0;
}