#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    vector<pair<int,int>> time;
    priority_queue<int, vector<int>, greater<int>> fastTime;

    int num{0};
    int s_time{0};
    int e_time{0};
    int max{0};
    cin >> num;

    for(int i = 0; i<num; i++){
        cin >> s_time >> e_time;
        time.push_back(make_pair(s_time,e_time));
    }
    
    sort(time.begin(), time.end());
    
    for(int i = 1; i < time.size(); i++){
        priority_queue<int, vector<int>, greater<int>> fastTime;
        fastTime.push(time[0].second);
        
        if(time[i].first >= fastTime.top()){
            fastTime.push(time[i].second);
        }


    }
    cout << max << "\n";
}
