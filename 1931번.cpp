#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool compare(pair<int, int>a, pair<int, int>b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    else {
        return a.second < b.second;
    }
}

int main(){
    vector<pair<int,int>> time;

    int num{0};
    int s_time{0};
    int e_time{0};
    cin >> num;

    for(int i = 0; i<num; i++){
        cin >> s_time >> e_time;
        time.push_back(make_pair(s_time,e_time));
    }
    
    sort(time.begin(), time.end(), compare);
    //확실
    
    int cnt{0};
    int now = time[0].second;
    
    for(int i = 1; i < num; i++){
        if(time[i].first >= now){
            cnt++;
            now = time[i].second;
        }
    }
    cout << cnt+1;
}
