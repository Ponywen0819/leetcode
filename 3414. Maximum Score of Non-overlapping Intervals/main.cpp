#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    Solution sol;
    // vector<vector<int>> intervals = {{1, 3, 2}, {4, 5, 2}, {1, 5, 5}, {6, 9, 3}, {6, 7, 1}, {8, 9, 1}};
    vector<vector<int>> intervals = {{5,8,1},{6,7,7},{4,7,3},{9,10,6},{7,8,2},{11,14,3},{3,5,5}};
    vector<int> result = sol.maximumWeight(intervals);
    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}