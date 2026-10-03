#include"solution.h"
#include<iostream>
#include<stack>

using namespace std;

int Solution::longestValidParentheses(string s){
    int o =0,c=0;
    int start = 0,last = 0;
    int best = 0;
    stack<int> valid;
    vector<int> index(s.size(),0);
    for(int i=0;i<s.size();i++){
        index[i] = i;
        int c = s[i] & 1;
        int current_top = valid.empty()? -1: valid.top();
        // matched
        if(current_top == 0 && c){
            valid.pop();
            int j = i-1;
            while (j>=0){
                if(index[j] == j){
                    index[j] = i;index[i] = j;
                    break;
                }else{
                    j = index[j] - 1;
                }
            }
            while (--j>=0)
            {
                if(index[j] != j) j = index[j];
                else break;
            }

            int len = i - j;
            if(best < len) best = len;

        }else if(!c){
            valid.push(0);
        }

    }    
    // for(int i =0;i<s.size();i++){
    //     cout<<index[i]<<" ,";
    // }
    // cout<<endl;
    return best;
}