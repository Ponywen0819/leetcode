#include"solution.h"
#include<queue>
#include<algorithm>

#include<iostream>

int Solution::largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
    int n = img1.size();
    vector<pair<int,int>> a, b;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            if (img1[i][j]) a.push_back({i, j});
            if (img2[i][j]) b.push_back({i, j});
        }

    unordered_map<int, int> vote;   // key = (dx+n)*64 + (dy+n)
    int best = 0;
    for (auto& [x1, y1] : a)
        for (auto& [x2, y2] : b) {
            int key = (x2 - x1 + n) * 64 + (y2 - y1 + n);
            best = max(best, ++vote[key]);
        }
    return best;
}
