#include"solution.h"
#include <iostream>

int main() {
    Solution sol;
    std::vector<int> rec1 = {0, 0, 2, 2};
    std::vector<int> rec2 = {1, 1, 3, 3};

    // std::vector<int> rec1 = {0,0,1,1};
    // std::vector<int> rec2 = {1,0,2,1};

    // std::vector<int> rec1 = {0,0,1,1};
    // std::vector<int> rec2 = {2,2,3,3};

    bool result = sol.isRectangleOverlap(rec1, rec2);
    std::cout << (result ? "true" : "false") << std::endl;
    return 0;
}

