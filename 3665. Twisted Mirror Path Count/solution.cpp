#include"solution.h"
#include<iostream>

using namespace std;
const int MOD = 10e9 + 7;

int Solution::uniquePaths(vector<vector<int>> &grid)
{
    int n = grid.size(); int m = grid[0].size();
    vector<vector<int>> R(n, vector<int>(m,0)), D(n, vector<int>(m, 0));
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 0) {
                // 非鏡子：機器人停在這裡，R、D 合併後往右、往下各傳一份
                int T = (i == 0 && j == 0) ? 1 : (R[i][j] + D[i][j]) % MOD;
                if (j + 1 < m) R[i][j + 1] = (R[i][j + 1] + T) % MOD;
                if (i + 1 < n) D[i + 1][j] = (D[i + 1][j] + T) % MOD;
            } else {
                // 鏡子：往右進來 -> 轉下；往下進來 -> 轉右；出界就丟掉
                if (i + 1 < n) D[i + 1][j] = (D[i + 1][j] + R[i][j]) % MOD;
                if (j + 1 < m) R[i][j + 1] = (R[i][j + 1] + D[i][j]) % MOD;
            }
        }
    }
    return (R[n - 1][m - 1] + D[n - 1][m - 1]) % MOD;
}