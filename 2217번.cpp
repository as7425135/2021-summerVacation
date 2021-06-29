#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> loof;
    int max{0};
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        loof.push(a);
    }
    
    for(int i = n; i > 0; i--){
        int a = loof.top() * i;
        if (a > max){max = a;}
        loof.pop();
    }

    cout << max;
}
