#include"solution.h"
#include <iostream>
#include<climits>

int Solution::minSumOfLengths(vector<int>&arr,int target){
    //first dimension representing current index
    //second dimension representing selected segments
    
    int n = arr.size();
    vector<vector<int>> dp(n+1, vector<int>(3, INT_MAX));
    vector<int> prefix(n+1,0);
    unordered_map<int,int> table;
    for(int i=0;i<=n;i++){
        dp[i][0] = 0;
    }
    table.insert({0,0});
    for(int i=0;i<n;i++){
        prefix[i+1] = prefix[i] + arr[i];
        table.insert({prefix[i+1],i+1});
    }


    for(int j=1;j<=2;j++){
        for(int i=1;i<=n;i++){
            auto res = table.find(prefix[i] - target);
            if(res!=table.end() && dp[res->second][j-1] != INT_MAX){
                dp[i][j] = min(dp[i-1][j] , dp[res->second][j-1] + i - res->second);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    if(dp[n][2]==INT_MAX){
        return -1;
    }
    return dp[n][2] ;
};