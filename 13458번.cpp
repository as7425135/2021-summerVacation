#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long sum{0}, num{0};
    int superM, nomalM, student{0};
    vector<int> v;
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> student;
        v.push_back(student);
    }
    cin >> superM >> nomalM;
    
    
    
    for(int i = 0; i < num; i++){
        if(v.back() <= superM){

            sum+=1;
            v.pop_back();
        }
        else{
            int result = v.back() - superM;
            sum += 1;
            if(result%nomalM == 0){
                sum+=(result/nomalM);
                v.pop_back();
            }
            else{

                sum+=(result/nomalM)+1;
                v.pop_back();
            }
        }
    }
    
    cout << sum;
}
