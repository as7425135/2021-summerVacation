#include <iostream>
using namespace std;
int arr[20], cnt = 0, n, k;

void solution(int idx, int sum){
    sum += arr[idx];

    if(idx >= n) return;

    if(sum == k) cnt++;

    solution(idx + 1, sum);
    solution(idx + 1, sum - arr[idx]);
}

int main(void){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    solution(0, 0);

    cout << cnt << "\n";
    return 0;
}
