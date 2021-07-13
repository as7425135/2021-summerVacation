#include <iostream>
 
using namespace std;
int map[500][500];
//기준 {0,0}
int block[19][3][2] =
    {
        //긴막대기 2
        {{0, 1}, {0, 2}, {0, 3}},
        {{1, 0}, {2, 0}, {3, 0}},
        //네모박스 1
        {{0, 1}, {1, 0}, {1, 1}},
        //니은과 기억자 8
        {{1, 0}, {2, 0}, {2, 1}},
        {{0, 1}, {0, 2}, {1, 0}},
        {{0, 1}, {0, 2}, {-1, 2}},
        {{0, 1}, {1, 1}, {2, 1}},
        {{1, 0}, {2, 0}, {2, -1}},
        {{0, 1}, {0, 2}, {1, 2}},
        {{0, 1}, {1, 0}, {2, 0}},
        {{1, 0}, {1, 1}, {1, 2}},
        //번개 4
        {{1, 0}, {1, 1}, {2, 1}},
        {{0, 1}, {-1, 1}, {-1, 2}},
        {{1, 0}, {1, -1}, {2, -1}},
        {{0, 1}, {1, 1}, {1, 2}},
        //뻐큐 4
        {{0, 1}, {0, 2}, {1, 1}},
        {{1, 0}, {1, -1}, {2, 0}},
        {{1, 0}, {1, 1}, {2, 0}},
        {{0, 1}, {0, 2}, {-1, 1}}
    };
 
int main()
{
    ios_base::sync_with_stdio(false);
    int n, m;
    int answer = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int z = 0; z < 19; z++)
            {
                bool check = true;
                int sum = map[i][j];
                for (int k = 0; k < 3; k++)
                {
                    int x = i + block[z][k][0];
                    int y = j + block[z][k][1];
                    if (0 <= x && x < n && 0 <= y && y < m)
                    {
                        sum += map[x][y];
                    }
                    else
                    {
                        check = false; //저장 하지 않고 건너뜀
                        break;
                    }
                }
                if (check && answer < sum)
                {
                    answer = sum;
                }
            }
        }
    }
 
    cout << answer << "\n";
 
    return 0;
}
