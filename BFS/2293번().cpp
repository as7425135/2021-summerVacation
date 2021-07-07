#include <cstdio>
​
int main() {
    int n, k;
    int c[101];
    int d[101][10001] = {0, };
​
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &c[i]);
    }
    
    for (int i = 1; i <= n; i++) {
        d[i][0] = 1;
    }
​
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (j >= c[i]) {
                d[i][j] = d[i - 1][j] + d[i][j - c[i]];
            }
            else {
                d[i][j] = d[i - 1][j];
            }
        }
    }
​
    printf("%d\n", d[n][k]);
​
    return 0;
}
