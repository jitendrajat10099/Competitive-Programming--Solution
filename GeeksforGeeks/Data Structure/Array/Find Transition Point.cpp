/*
https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/0
*/
#include <iostream>
using namespace std;
int finding(int arr[],int n);
int main(){
    int i,p;
    int t,flag=0;
    cin>>t; //total binary elments in the array
    int arr[t];
    for(i=0;i<t;i++){
        cin>>arr[i];
    }
    p = finding(arr,t);
    cout<<p;
    return 0;
    }

int finding(int arr[],int n){  //complexity O(log n),similar to binary search with added conditional statement
        int lb=0,ub=n-1;
        while(lb<=ub){
            int mid = (lb+ub)/2;
            if(arr[mid]==0)
                lb = mid+1;
            else if (arr[mid] == 1)
            {
                if(arr[mid-1]==0)
                    return mid;
                ub = mid-1;
            }
            }
            return -1;
        }
