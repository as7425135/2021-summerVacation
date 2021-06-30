#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string num{0};
    int sum {0};
    cin >> num;
    bool zero = false;
    
    for (int i = 0; i < num.size(); i++){
        sum += (num[i] - '0');
        if(!(num[i]-'0'))
            zero = true;
    }

    if(sum%3 || !zero){
        cout << -1 << "\n";
    }
    else{
        sort(num.begin(), num.end());
        reverse(num.begin(), num.end());
         cout << num << "\n";
    }
    return 0;
}

