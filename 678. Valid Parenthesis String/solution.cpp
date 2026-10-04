#include"solution.h"
#include<iostream>

using namespace std;

bool Solution::checkValidString(string s){
    int lo=0,hi=0;
    for(auto c:s){
        hi += c == ')' ? -1 : 1;
        
        if(c =='('){
            lo++;            
        }
        else if(c == ')'){
            lo--;
        }
        else{
            lo = max(lo, lo -1);
        }

        if(hi<0) return false;
    }
    return lo == 0;
}
