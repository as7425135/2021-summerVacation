#include <iostream>
#include <stack>
using namespace std;
 
int N, P;
 
int main(void)
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cin >> N >> P;
 
        stack<int> s[7]; //줄 1 ~ 6
        int result = 0;
 
        for (int i = 0; i < N; i++)
        {
                 pair<int, int> temp;
                 cin >> temp.first >> temp.second;
 
                 if (s[temp.first].empty())
                 {
                         result++;
                         s[temp.first].push(temp.second);
                 }
                 else
                 {
                         //무조건 제일 높은 음만 난다
                         if (temp.second > s[temp.first].top())
                         {
                                 s[temp.first].push(temp.second);
                                 result++;
                         }
                         //이미 있으면 추가할 필요 X
                         else if (temp.second == s[temp.first].top())
                                 continue;
                         else
                         {
                                 //temp.second가 제일 높은 음이 나도록
                                 while (!s[temp.first].empty() && temp.second < s[temp.first].top())
                                 {
                                          s[temp.first].pop();
                                          result++;
                                 }
 
                                 //이미 temp가 있다면 추가 X
                                 if (!s[temp.first].empty() && s[temp.first].top() == temp.second)
                                          continue;
 
                                 s[temp.first].push(temp.second);
                                 result++;
                         }
                 }
        }
 
        cout << result << "\n";
        return 0;
}



출처: https://jaimemin.tistory.com/830 [꾸준함]
