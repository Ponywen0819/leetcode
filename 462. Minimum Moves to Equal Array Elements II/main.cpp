#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"../doctest.h"
#include"solution.h"

TEST_CASE("examples"){
    Solution s;
    vector<int> a = {1,2,3};
    vector<int> b = {1,10,2,9};
    vector<int> c = {2,1,3};
    CHECK(s.minMoves2(a) == 2);
    CHECK(s.minMoves2(b) == 16);
    CHECK(s.minMoves2(c) == 2);
}

TEST_CASE("edge"){
    Solution s;
    vector<int> one = {5};
    vector<int> dup = {1,1,1,5};
    vector<int> c = {1,0,0,8,6};
    vector<int> neg = {-3,-1,2};
    CHECK(s.minMoves2(one) == 0);
    CHECK(s.minMoves2(dup) == 4);
    CHECK(s.minMoves2(c) == 14);
    CHECK(s.minMoves2(neg) == 5);
}
