#include<iostream>
using namespace std;
int main()
{
 
int xaxis;
int yaxis;
int square_edge;
int timing;
 
cin>>xaxis>>yaxis>>square_edge>>timing;
int count=0;
for(int i=xaxis; i<=xaxis+square_edge; i++){
    for(int j=yaxis; j<=yaxis+square_edge; j++){
        if((i+j) <= timing){
            count++;
        }
    }
}
 
cout<<count<<endl;
}