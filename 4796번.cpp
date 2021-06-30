#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a{-1}, b{-1}, c{-1};
    int result{0};
    vector<int> v;
    while (1){
        cin >> a >> b >> c;
        if(a==0 & b==0 & c==0){
            break;
        }
        if((c%b) > a){ // 예외처리 잘하기!
            result = (c/b)*a + a;
        }
        else{
            result = (c/b)*a + (c%b);
        }
        v.push_back(result);
    }
    
    for(int i = 0; i < v.size(); i++){
        cout << "Case " << i+1 <<": "<< v[i] << "\n";
    }
}
