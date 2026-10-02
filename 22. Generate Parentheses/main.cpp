#include<iostream>
#include<vector>
#include"solution.h"

using namespace std;

int main(){
    Solution s;
    for(auto str : s.generateParenthesis(3)){
        cout << str.c_str() << endl;
    }
    return 0;
}
