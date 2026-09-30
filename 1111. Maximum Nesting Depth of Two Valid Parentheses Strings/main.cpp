#include<iostream>
#include<string>
#include"solution.h"


using namespace std;


int main(){
    string seq = "(()())";
    Solution s;
    vector<int> res = s.maxDepthAfterSplit(seq);

    for(auto it:res){
        cout << it << "," << endl;
    }
    return 0;
}