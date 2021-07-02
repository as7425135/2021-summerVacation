#include <iostream>
#include <algorithm>
using namespace std;

int score[2][100001] = {0,};
int dp[2][100001] = {0,};

int calc(int n){
    for(int i = 0; i < n; i++){
        int k; cin >> k; score[0][i] = k;
    }
    for(int i = 0; i < n; i++){
        int k; cin >> k; score[1][i] = k;
    }
    dp[0][0] = score[0][0];
    dp[1][0] = score[1][0];
    dp[0][1] = score[0][1] + score[1][0];
    dp[1][1] = score[1][1] + score[0][0]; //기본 설정
    
    for (int i = 2; i < n; i++){
        dp[0][i] = score[0][i] + max(score[1][i-1], score[1][i-2]);
        dp[1][i] = score[1][i] + max(score[0][i-1], score[0][i-2]);

    }
    return(max(dp[0][n-1], dp[1][n-1]));
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i <n; i++){
        int k; cin >> k;
        cout << calc(k) << "\n";
    }
}
