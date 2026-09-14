#include<iostream>
#include"solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<vector<int>> img1 = {{1, 1, 0}, {0, 1, 0}, {0, 1, 0}};
    vector<vector<int>> img2 = {{0, 0, 0}, {0, 1, 1}, {0, 0, 1}};
    int result = solution.largestOverlap(img1, img2);
    cout << "Largest Overlap: " << result << endl;
    return 0;
}
