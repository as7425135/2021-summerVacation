#include <bits/stdc++.h>
using namespace std;
struct A{
    int num,idx;
}a[5000001];

bool cmp(A const& a, A const& b) {
    return a.num < b.num;
}
int n, m, i, j, cnt, start, _end, k;
int main(){
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++){
        scanf("%d", &a[i].num);
        a[i].idx = i+1;
    }
    sort(a, a + n, cmp);
    for (i = 0; i < m; i++){
        scanf("%d %d %d", &start, &_end, &k);
        for (j = 0; j < n; j++){
            if (start <= a[j].idx && a[j].idx <= _end)cnt++;
            if(cnt == k){
                printf("%d\n", a[j].num);
                break;
            }
        }
        cnt = 0;
    }
    return 0;
}
