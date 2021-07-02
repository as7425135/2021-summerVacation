#include <iostream>
#include <algorithm>
using namespace std;

int score[301];
int dp[301][2];
int main(){
    int n, k;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> k;
        score[i] = k;
    }
    
    dp[1][0] = score[1];
    
    for(int i = 2; i <=n; i++){
        dp[i][1] = dp[i-1][0] + score[i]; //2번연속 - 전칸에 방문했단 뜻 / 전칸은 당연히 한번방문
        dp[i][0] = max(dp[i-2][0], dp[i-2][1]) + score[i];  //1번연속 - 바로 전칸에 방문하지 않음
    }
    cout << max(dp[n][0], dp[n][1]) ;
}

