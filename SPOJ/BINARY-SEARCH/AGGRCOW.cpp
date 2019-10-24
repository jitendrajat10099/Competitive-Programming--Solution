/*
    Problem: https://www.spoj.com/problems/AGGRCOW/
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-->0){

        int n,c;
        cin >> n >> c;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);

        int l=0,h=a[n-1] - a[0];
        int mid = (l+h)/2;
        int f = 0;
        int cows = c;
        int minSeparation = mid;
        while(l<=h){
            mid = (l+h)/2;    
            cows = c-1;
            f = 0;

            for(int i=1;i<n;i++){
                if((a[i] - a[f]) >=mid){ //1 2 4 8 9
                    f = i;
                    cows--;
                }
                if(cows==0) break;                
            }
            if(cows==0){
                l=mid+1;
                minSeparation = mid;
            }else{
                h = mid-1;
            }
        }
        cout << minSeparation << "\n";
    }

    return 0;
}