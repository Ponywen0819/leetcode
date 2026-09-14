#include "solution.h"

std::vector<int> Solution::maximumWeight(std::vector<std::vector<int>>& intervals) {
    // TODO: Implement the solution

    // initialize custom data structure to hold intervals with their weights and indices
    int n = intervals.size();
    std::vector<Element> elements(n);
    for (int i = 0; i < n; i++) {
        elements[i]=Element(intervals[i][0], intervals[i][1], intervals[i][2], i);
    }
    
    // sort the intervals based on their end times
    std::sort(elements.begin(), elements.end(), [](const Element& a, const Element& b) {
        return a.end < b.end;
    });

    // define a dp array to store the maximum weight up to each interval
    // first dimension is the index of the interval, second dimension is the number of intervals selected (0 to 4)
    std::vector<std::vector<State>> dp(n + 1, std::vector<State>(5, State(0, {})));

    // fill the dp array
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 4; j++) {
            // find the last non-overlapping interval
            int lastNonOverlap = std::lower_bound(
                elements.begin(), 
                elements.end(), 
                elements[i - 1], 
                [](const Element& a, const Element& b) {return a.end < b.start;}
            ) - elements.begin();
            
            
            std::vector<int> newIndices = dp[lastNonOverlap][j - 1].indices;
            newIndices.push_back(elements[i - 1].idx);
            std::sort(newIndices.begin(), newIndices.end());
            State newCondition = State(
                dp[lastNonOverlap][j - 1].sum + elements[i - 1].weight,
                newIndices
            );

            dp[i][j] = Solution::better(
                dp[i - 1][j], 
                newCondition
            )? dp[i - 1][j] : newCondition;
        }
    }

    int bestIndex = 0;
    for (int j = 1; j <= 4; j++) {
        if (Solution::better(dp[n][j], dp[n][bestIndex])) {
            bestIndex = j;
        }
    }


    return dp[n][bestIndex].indices;
}


bool Solution::better(const State& a, const State& b) {
    if (a.sum != b.sum) return a.sum > b.sum;
    return a.indices < b.indices;
}