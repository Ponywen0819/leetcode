#include<iostream>
#include"solution.h"

using namespace std;

int main(){
    // string s="adefaddaccc";
    string s="abbaccd";
    Solution solution;
    vector<string> res = solution.maxNumOfSubstrings(s);

    cout<<res.size()<<endl;
    for(auto e: res){
        cout << e << endl;
    }

    return 0;
}