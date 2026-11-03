#include"solution.h"
#include<iostream>

using namespace std;

int Solution::minMoves(vector<int>& nums)
{
    long long ans = 0;
    int max = nums[0];
    for(int i =1;i< nums.size();i++)
    {
        int diff = abs(nums[i] - max);
        if(max < nums[i])
        {
            ans += diff *i;
            max = nums[i];
        }
        else
        {
            ans += diff;
        } 

    }
    return int(ans);
}