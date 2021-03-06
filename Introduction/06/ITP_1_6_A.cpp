#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <stack>
using namespace std;

int main(void){
    int n;
    int a_i;
    stack<int> st;

    cin >> n;

    for (int i=1; i<=n; i++) {
        cin >> a_i;
        st.push(a_i);
    }

    for (int i=1; i<=n; i++) {
        cout << st.top();
        if (i!=n) cout << " ";
        st.pop();
    }

    cout << endl;

    return 0;
}