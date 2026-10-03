#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"../doctest.h"
#include"solution.h"

TEST_CASE("examples"){
    Solution s;
    CHECK(s.longestValidParentheses("(()") == 2);
    CHECK(s.longestValidParentheses(")()())") == 4);
    CHECK(s.longestValidParentheses("") == 0);
    CHECK(s.longestValidParentheses("()(()") == 2);
    CHECK(s.longestValidParentheses("()(())") == 6);
}
