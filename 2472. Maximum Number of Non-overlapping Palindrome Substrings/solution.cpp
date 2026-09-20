#include "solution.h"

bool isPalindrome(const string& s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int Solution::maxPalindromes(string s, int k){
    int ans = 0, last = -1;
    int n = s.size();
    for (int r = 0; r < n; ++r) {
        for (int len = k; len <= k+1; ++len) {
            int l = r - len + 1;
            if (l > last && l >=0 && isPalindrome(s, l, r)) {
                ans++;
                last = r;
                break;
            }
        }
    }
    return ans;
}