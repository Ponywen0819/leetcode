#include<iostream>
#include<vector>
#include"solution.h"

using namespace std;

int main(){
    vector<int> nums = {1,1};
    int x=3;



    Solution s;
    int res = s.minOperations(nums,x);
    
    cout << res;
    return 0;
}