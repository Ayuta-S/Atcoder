#include <stdio.h>
#include <iostream>
using namespace std;

int N; //スイッチの総数
int M; //電球の総数s
int k[20]; //電球iのswitchの個数
int s[20][20]; // 電球iのj番目のスイッチの状態
int p[20]; //電球iの点灯条件

int main(void) {
    //入力処理
    cin >> N;
    cin >> M;
    for (int i=0; i<M; i++) {
        cin >> k[i];
        for (int j=0; j<k[i]; j++) cin >> s[i][j];
    }
    for (int i=0; i<M; i++) cin >> p[i];

    //bit全探索 >> スイッチonの部分集合
    int sum;
    bool allLit;
    int count=0;

    for (int bit=0; bit<(1<<N); bit++) {
        for (int i=0; i<M; i++) {
            sum = 0;
            allLit = true;
            for (int j=0; j<k[i]; j++) {
                if (bit & (1<<s[i][j]-1)) sum++;
            }
            if (!(sum % 2 == p[i])) {
                allLit = false;
                break;
            }
        }
        if (allLit) count++;
    }

    cout << count << endl;
    return 0;
}
