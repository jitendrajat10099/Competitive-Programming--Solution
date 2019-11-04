// https://www.hackerrank.com/challenges/diagonal-difference/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    int primarySum=0, secondarySum=0, result=0, j=n-1;
    for(int i=0; i<n; i++) {
        primarySum+=a[i][i];
        secondarySum+=a[i][j];
        j--;
    }
    result = primarySum-secondarySum;
    if(result<0)
        result*=-1;
    cout << result << endl;
    
    return 0;
}