#include"solution.h"
#include<iostream>
#include<unordered_map>

using namespace std;

int Solution::minOperations(vector<int>& nums, int x) {
    vector<int> prefixSum(nums.size(), 0);
    vector<int> suffixSum(nums.size(), 0);
    unordered_map<int,int> pre,suff;

    int prefix_max = 0;

    prefixSum[0] = nums[0];
    pre[prefixSum[0]] = 0;
    suffixSum[nums.size() - 1] = nums[nums.size() - 1];
    suff[suffixSum[nums.size() - 1]] = nums.size() - 1;
    for(int i =1;i<nums.size();i++){
        prefixSum[i] = prefixSum[i-1] + nums[i];

        if(prefixSum[i] <= x){
            prefix_max = i;
        }
        
        suffixSum[nums.size() - i - 1] = suffixSum[nums.size() - i] + nums[nums.size() - i -1];
        pre[prefixSum[i]] = i;
        suff[suffixSum[nums.size() - i - 1]] = nums.size() - i - 1;
    }

    

    int min_pos = INT_MAX;
    if(suff.find(x) != suff.end()){
        min_pos = min(min_pos, int(nums.size() - suff[x]));
    }
    if(pre.find(x) != pre.end()){
        min_pos = min(min_pos, pre[x] + 1);
    }

    for(int i = 0; i <= prefix_max; i++){
        int target = x - prefixSum[i];
        auto suff_res = suff.find(target);
        if(suff_res!=suff.end() && suff_res->second > i){
            min_pos = min(min_pos, int(nums.size() - suff_res->second +1) + i );
        }
    }
    
    if(min_pos == INT_MAX){
        return -1;
    }

    return min_pos;
};