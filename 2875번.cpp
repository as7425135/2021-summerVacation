#include <iostream>
using namespace std;

int team(int a, int b, int c){
    int girl = a;
    int boy = b;
    int intern = c;
    
    while(intern != 0){
        if(girl/2 >= boy){
            girl--;
            intern--;
        }
        else if(girl/2 < boy){
            boy--;
            intern--;
        }
    }
    int team {0};
    girl/2 > boy? team=boy : team=girl/2;

    return team;
}

int main(){
   // int num{0};
    int girl{0};
    int boy{0};
    int intern{0};

    cin >> girl >> boy >> intern;
    cout << team(girl, boy, intern) << "\n";
}
