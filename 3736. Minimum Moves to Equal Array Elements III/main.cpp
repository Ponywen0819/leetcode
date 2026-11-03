#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"../doctest.h"
#include"solution.h"

TEST_CASE("examples"){
    Solution s;
    vector<int> a = {2,1,3};
    vector<int> b = {4,4,5};
    CHECK(s.minMoves(a) == 3);
    CHECK(s.minMoves(b) == 2);
}

TEST_CASE("edge"){
    Solution s;
    vector<int> one = {7};
    vector<int> same = {5,5,5};
    vector<int> inc = {1,2,3,4};
    vector<int> two = {1,100};
    vector<int> big(100, 1);
    big[0] = 100;
    CHECK(s.minMoves(one) == 0);
    CHECK(s.minMoves(same) == 0);
    CHECK(s.minMoves(inc) == 6);
    CHECK(s.minMoves(two) == 99);
    CHECK(s.minMoves(big) == 9801);
}
