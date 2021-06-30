#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int num{0}, level{0}, sum{0};
    vector<int> v;
    cin >> num;
    for (int i = 0; i < num; i++){
        cin >> level;
        v.push_back(level);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    
    int max = v[0];
    for(int i = 1; i < v.size(); i++){
         sum += (max + v[i]);
    }
    
    cout << sum << "\n";
}

