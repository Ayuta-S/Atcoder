#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
    int n, m, l;
    vector< vector<int> > A;
    vector< vector<int> > B;
    vector< vector<long long> > C;

    cin >> n >> m >> l;

    A.resize(n);
    B.resize(m);
    C.resize(n);

    for (int i=0; i<n; i++) A[i].resize(m);
    for (int i=0; i<m; i++) B[i].resize(l);
    for (int i=0; i<n; i++) C[i].resize(l);

    for (int i=0; i<n; i++) {
        for (int j =0; j<m; j++) {
            cin >> A[i][j];
        }
    }

    for (int i=0; i<m; i++) {
        for (int j =0; j<l; j++) {
            cin >> B[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<l; j++) {
            C[i][j] = 0;
            for (int k=0; k<m; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<l; j++) {
            cout << C[i][j];
            if (j<l-1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}