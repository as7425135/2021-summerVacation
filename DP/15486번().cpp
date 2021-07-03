#include<iostream>
 
#define endl "\n"
#define MAX 1500010
using namespace std;
 
int N, Answer;
int DP[MAX];
int Arr[MAX][2];
 
int Bigger(int A, int B) { if (A > B) return A; return B; }
 
void Input()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> Arr[i][0] >> Arr[i][1];
    }
    // Arr[i][0] = 걸리는 날짜
    // Arr[i][1] = 돈
}
 
void Solution()
{
    int Current_Max = 0;
    for (int i = 1; i <= N + 1; i++)
    {
        Current_Max = Bigger(Current_Max, DP[i]);
        if (i + Arr[i][0] > N + 1) continue;
        
        DP[i + Arr[i][0]] = Bigger(Current_Max + Arr[i][1], DP[i + Arr[i][0]]);
    }
    Answer = Current_Max;
}
 
void Solve()
{
    Input();
    Solution();
    cout << Answer << endl;
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}


출처: https://yabmoons.tistory.com/337 [얍문's Coding World..]
