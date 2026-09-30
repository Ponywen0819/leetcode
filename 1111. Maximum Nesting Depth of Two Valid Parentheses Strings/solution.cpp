#include"solution.h"
#include<string>
#include<vector>
#include<stack>

using namespace std;

vector<int> Solution::maxDepthAfterSplit(string seq){
    int depth = 0, max_depth = 0;
    vector<int> res, depths;
    res.reserve(seq.size());
    depths.reserve(seq.size());
    for(int i = 0;i<seq.size();i++){
        char c = seq[i];
        if(c == '('){
            depth++;
        }

        if(depth> max_depth){
            max_depth = depth;
        }
        depths.push_back(depth);
        if(c == ')'){
            depth--;
        }
    }

    int required_depth = max_depth /2;
    for(auto& it:depths){
        it = (it >= max_depth - required_depth + 1 ? 1: 0);
    }

    return res;
};