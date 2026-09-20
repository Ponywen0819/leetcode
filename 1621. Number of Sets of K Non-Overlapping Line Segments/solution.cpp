#include"solution.h"
#include <iostream>
// using namespace std;

int Solution::numberOfSets(int n, int k){
    std::vector<std::vector<long long>> dp(n, std::vector<long long>(k+1, 0));
    std::vector<long long>  prefix(n, 0);
    for(int i=0;i<n;i++){
        dp[i][0] = 1;
    }

    for(int j=1;j<=k;j++){
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + dp[i-1][j-1];
            dp[i][j] = dp[i-1][j] + prefix[i];
            dp[i][j] %= 1000000007;
        }
    }

    return dp[n-1][k];
}