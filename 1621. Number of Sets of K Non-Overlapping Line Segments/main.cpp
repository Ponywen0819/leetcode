#include<iostream>
#include"solution.h"

using namespace std;


int main(){
    int n, k;
    n = 21;
    k = 2;

    Solution solution;
    int result = solution.numberOfSets(n, k);

    cout << "Number of sets of " << k << " non-overlapping line segments in a line of length " << n << ": " << result << endl;
    return 0;
}