#include<iostream>
#include"solution.h"
#include<vector>

using namespace std;

int main(){
    int target = 3;
    vector<int> arr = {2,3,2,4,3};
    // int target = 7;
    // vector<int> arr = {7,3,4,7};
    // int target = 6;
    // vector<int> arr = {4,3,2,6,2,3,4};

    Solution solution;
    int result = solution.minSumOfLengths(arr, target);
    cout << result << endl;

    
    return 0;
}