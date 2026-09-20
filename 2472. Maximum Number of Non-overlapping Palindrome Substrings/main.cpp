#include "solution.h"
#include <iostream>

using namespace std;

int main() {
    Solution solution;
    string s = "abaccdbbd";
    int k = 3;
    int result = solution.maxPalindromes(s, k);
    cout << "Maximum number of non-overlapping palindrome substrings: " << result << endl;
    return 0;
}