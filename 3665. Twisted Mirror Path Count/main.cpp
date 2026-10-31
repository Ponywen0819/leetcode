#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"../doctest.h"
#include"solution.h"

TEST_CASE("examples"){
    Solution s;
    vector<vector<int>> g1 = {{0,1,0},{0,0,1},{1,0,0}};
    vector<vector<int>> g2 = {{0,0},{0,0}};
    vector<vector<int>> g3 = {{0,1,1},{1,1,0}};
    CHECK(s.uniquePaths(g1) == 5);
    CHECK(s.uniquePaths(g2) == 2);
    CHECK(s.uniquePaths(g3) == 1);
}
