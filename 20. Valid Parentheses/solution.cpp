#include"solution.h"
#include<iostream>
#include<stack>

using namespace std;

bool Solution::isValid(string s){
    stack<char> stack;
    stack.push(s[0]);

    for(int i=1;i<s.size();i++){
        char current = s[i];
        if(current == ')' || current == ']' ||current == '}'){
            if(stack.empty()){
                return false;
            }
            int diff = current - stack.top();
            if(diff <= 0 || diff >2){
                return false;
            }else{
                stack.pop();
            }
        }else{
            stack.push(current);
        }
    }
    return stack.empty();
}