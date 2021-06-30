#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num{0}, people{0}, rank{0};
    cin >> num;
    for(int i = 0; i < num; i++){
        vector<pair<int, int>> v;
        int count{1};
        cin >> people;
        for(int j = 0; j < people; j++){
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(), v.end());
        
        rank = v[0].second;
        for(int j = 0; j < people; j++){
            if(rank > v[j].second){
                rank = v[j].second;
                count++;
            }
        }
        cout << count << "\n";
    }
    
}
