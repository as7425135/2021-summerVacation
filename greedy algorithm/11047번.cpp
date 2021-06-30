#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int min_coin(int price, vector<int> v){
    int value = price;
    int total_coin_count{0};
    int coin_num{0};
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++){
        coin_num = value/v[i];
        total_coin_count += coin_num;
        value-=coin_num*v[i];
    }
    return total_coin_count;
}


int main() {
    int num, price, a{0};
    vector<int> coinV;
    cin >> num >> price;
    for (int i = 0; i < num; i++){
        cin >> a;
        coinV.push_back(a);
    }
    
    cout << min_coin(price, coinV) << "\n";
}
