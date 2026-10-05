#include"solution.h"
#include<iostream>

using namespace std;

int Solution::scoreOfParentheses(string s){
    int depth = 0;
    int score = 0;
    
    for(int i=0;i<s.size();i++){
        char c = s[i];
        // c==')'
        if(c & 1){
            depth--;
            if(!(s[i-1] & 1)){
                score += 1 << depth;
            }
        }
        // c=='('
        else{
            depth ++;
        }
    }

    // return score.back();
    return score;
}