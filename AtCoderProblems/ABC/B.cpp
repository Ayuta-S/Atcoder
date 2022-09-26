#include <iostream>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std; 
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

ll N;
int K;

int main (void) {
    cin >> N >> K;


    rep(i, 0, K) {
        if (N%200 == 0) N /= 200;
        else N = N*1000 + 200;  
    }
    
    cout << N << endl;
  	return 0;

}