#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"../doctest.h"
#include"solution.h"

TEST_CASE("examples"){
    Solution s;
    vector<int> a = {1,2,3};
    vector<int> b = {1,1,1};
    CHECK(s.minMoves(a) == 3);
    CHECK(s.minMoves(b) == 0);
}

TEST_CASE("edge"){
    Solution s;
    vector<int> one = {5};
    vector<int> desc = {3,2,1};
    vector<int> mixed = {5,6,8,8,5};
    vector<int> neg = {-3,0,4};
    vector<int> big = {1,1000000000};
    CHECK(s.minMoves(one) == 0);
    CHECK(s.minMoves(desc) == 3);
    CHECK(s.minMoves(mixed) == 7);
    CHECK(s.minMoves(neg) == 10);
    CHECK(s.minMoves(big) == 999999999);
}
