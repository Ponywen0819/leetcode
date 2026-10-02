#include"solution.h"
#include<iostream>

using namespace std;


int nextState(int x){
    int c = x & -x;
    int r = x + c;
    return (((x ^ r)  >> 2)/c) | r;
}

vector<string> Solution::generateParenthesis(int n){
    vector<string> res;
    int state = (1<<n) -1;    
    int end = (state<< (n - 1)); 
    string temp;    
    while (state <= end)
    {   
        temp = "";
        int count = 0;
        for(int i=n*2-1;i>=0;i--){
            int b =  (state >> i )& 1;
            temp += '(' + b;
            count += (1 - (b<<1));
            if(count < 0) break;
        }
        if(count == 0) res.push_back(temp);
        state = nextState(state);
    }
    return res;
}