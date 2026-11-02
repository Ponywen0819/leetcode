#include"solution.h"
#include<iostream>
#include<random>

using namespace std;

int sortNthElement(vector<int>& nums)
{
    int r = nums.size() -1, l = 0, t= nums.size()/2;
    while (true)
    {
        int p =  rand() % (r-l + 1) + l;
        int j = l;
        int pivot = nums[p];
        swap(nums[p], nums[r]);
        for(int i = l;i<r;i++)   
        {
            if(nums[i] < pivot) swap(nums[j++], nums[i]);
        }
        swap(nums[j],nums[r]);

        if(j == t) return nums[t];
        else if(j<t) l = j+1;
        else r = j-1;
    }   
}

int Solution::minMoves2(vector<int>& nums)
{
    int t = sortNthElement(nums);
    long long ans = 0;
    for(int e:nums) ans += abs(t - e);
    return (int)ans;
}
