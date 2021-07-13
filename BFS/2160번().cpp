#define _CRT_SECURE_NO_WARNINGS
#define MAX 987654321
#include <cstdio>

int main()
{
    int n;
    int answer = MAX;
    int firstPic, secondPic;
    char pic[5][7][50];

    scanf("%d", &n); //scanf 할 때 엔터까지 들어가서 printf할때도 자동엔터가 되는거구나.

    for (int loop = 0; loop < n; loop++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 7; j++) {
                scanf(" %c", &pic[i][j][loop]); // '\n' 버리고 받기.
            }
        }
    }

    // 비교
    
    for (int pivot = 0; pivot < n; pivot++) {
        for (int target = pivot + 1; target < n; target++) {
            int count = 0;
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 7; j++) {
                    count += (pic[i][j][pivot] != pic[i][j][target]);

                    if (count > answer) break;
                }
            }
            if (count < answer) {
                answer = count;
                firstPic = pivot + 1;
                secondPic = target + 1;
            }
        }
    }

    printf("%d %d", firstPic, secondPic);

    return 0;
}
