#include"solution.h"
#include<string>
#include<iostream>


bool Solution::hasValidPath(vector<vector<char>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    if(grid[0][0] == ')' || grid[m-1][n-1] == '(' || (m + n - 1) & 1){
        return false;
    }

    vector<vector<bitset<102>>> dp(m + 1 , vector<bitset<102>>(n + 1));

    dp[0][0].set(0);
    for(int j = 0 ; j< n; j++){
        for(int i = 0; i < m; i++){
            auto b = (dp[i][j] << 1) >> ((grid[i][j] & 1) << 1);

            dp[i+1][j] |= b;
            dp[i][j+1] |= b;
        }
    }
    
    return dp[m][n-1].test(0);
};