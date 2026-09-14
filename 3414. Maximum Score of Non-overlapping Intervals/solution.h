#pragma once

#include <vector>
class Solution {
public:
struct Element {
        int start;
        int end;
        int weight;
        int idx;

        Element() : start(0), end(0), weight(0), idx(0) {}
        Element(int s, int e, int w, int i) : start(s), end(e), weight(w), idx(i) {}
    };

    struct State{
        long long sum;
        std::vector<int> indices;
        State(): sum(0),indices(std::vector<int>({})) {}
        State(long long s, std::vector<int> idx) : sum(s), indices(idx) {}
    };

    std::vector<int> maximumWeight(std::vector<std::vector<int>>& intervals);

    bool better(const State& a, const State& b);
};