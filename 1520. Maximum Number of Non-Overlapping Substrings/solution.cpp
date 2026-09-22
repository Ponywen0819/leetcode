#include"solution.h"
#include<unordered_map>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

vector<string> Solution::maxNumOfSubstrings(string s){
    unordered_map<char, int> first, last, count;
    
    for(auto it=s.begin();it!=s.end();it++){
        auto index = it - s.begin();
        first.insert({*it,index});
        last[*it] = index;
        count[*it]+=1;
    }    

    vector<string> res;
    int last_end = 0;
    for(int i =0;i<s.size();i++){
        int j=i;
        int requird_min = j;
        int finded = 0;

        while (j>=last_end)
        {
            auto last_res = last.find(s[j]);
            if(last_res->second > i){
                break;
            }
            auto first_res = first.find(s[j]);
            if(requird_min >= first_res->second){
                requird_min = first_res->second;
            }

            if(requird_min == j){
                finded = 1;
                break;
            }
            j--;
        }    
        
        if(finded){
            res.push_back(s.substr(requird_min, i-requird_min+1));
            last_end = i;
        }
    }

    return res;
};