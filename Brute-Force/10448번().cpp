#include <iostream>
#define MAX_SIZE 44
 
using namespace std;
 
int TRIANGLE[MAX_SIZE+1];
 
int findTriangle(int K) {
    //n(n+1)/2 <= 1000 이므로, 우리가 가진 삼각수는 44개(n의 최대가 44)
    for (int i = 1; i <= MAX_SIZE; i++) {
        for (int j = 1; j <= MAX_SIZE; j++) {
            for (int k = 1; k <= MAX_SIZE; k++) {
                if (TRIANGLE[i] + TRIANGLE[j] + TRIANGLE[k] == K) {
                    return 1;
                }
            }
        }
    }
 
    return 0;
}
 
int main() {
 
    int N;
    cin >> N;
    int K;
 
    //삼각수 값 배열 초기화
    for (int i = 0; i <= MAX_SIZE; i++) {
        TRIANGLE[i] = i * (i + 1) / 2;
    }
 
    for (int i = 0; i < N; i++) {
        cin >> K;
        cout << findTriangle(K) << endl;
    }
 
    return 0;
 
}
