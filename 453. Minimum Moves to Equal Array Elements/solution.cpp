#include"solution.h"
#include<iostream>

using namespace std;

int Solution::minMoves(vector<int>& nums)
{
    long long ans =0;
    int min = nums[0];
    for(int i=1;i<nums.size();i++)
    {   
        int diff = abs(min - nums[i]);
        if(nums[i] < min)
        {
            ans += i * diff;
            min = nums[i];
        }
        else
        {
            ans += diff;
        }
    }

    return (int)ans;
}