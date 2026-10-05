#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"../doctest.h"
#include"solution.h"

TEST_CASE("examples"){
    Solution s;
    CHECK(s.scoreOfParentheses("()") == 1);
    CHECK(s.scoreOfParentheses("(())")== 2);
    CHECK(s.scoreOfParentheses("((()))") == 4);
    CHECK(s.scoreOfParentheses("()()") == 2);
    CHECK(s.scoreOfParentheses("(()())") == 4);
    CHECK(s.scoreOfParentheses("()(())") == 3);
    CHECK(s.scoreOfParentheses("(()(()))") == 6);
}
