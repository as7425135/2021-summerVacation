#include <iostream>
#include <algorithm>
using namespace std;

char candy[51][51];
int n, ans{0};

void check(){
    char c;

    for(int i = 0; i < n; i++){
        int count = 1;
        c = candy[i][0];
        for(int j = 1; j < n; j++){
            if(candy[i][j] == c){
                count++;
                
            }
            else count = 1;
            c = candy[i][j];
            
            if(count > ans) ans = count;
        }
    }
    
    for(int i = 0; i < n; i++){
        int count = 1;
        c = candy[0][i];
        for(int j = 1; j < n; j++){
            if(candy[j][i] == c){
                count++;
                
            }
            else count = 1;
            c = candy[j][i];
            
            if(count > ans) ans = count;
        }
    }
}


int main(){
    cin >> n;
    
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char a;
            cin >> a;
            candy[i][j] = a;
        }
    }
    
    for(int i = 0; i < n-1; i++){
        for (int j = 0; j < n; j++){
            swap(candy[i][j], candy[i+1][j]);
            check();
            swap(candy[i+1][j], candy[i][j]);
            
        }
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            swap(candy[i][j], candy[i][j+1]);
            check();
            swap(candy[i][j+1], candy[i][j]);
        }
    }
    cout << ans;
}
