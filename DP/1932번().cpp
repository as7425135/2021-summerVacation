#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int triangle[500][500];
int cache[500][500];

int n;

int path(int y, int x)
{
    // 기저 사례
    if (y == n - 1)
        return triangle[y][x];
    // 메모이제이션
    int &ret = cache[y][x];
    if (ret != -1)
        return ret;
    return ret = max(path(y + 1, x), path(y + 1, x + 1)) + triangle[y][x];
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i + 1; j++)
            scanf("%d", &triangle[i][j]);

    memset(cache, -1, sizeof(cache));
    printf("%d\n", path(0, 0));

    return 0;
}
