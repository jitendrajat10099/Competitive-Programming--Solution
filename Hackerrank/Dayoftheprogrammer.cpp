#include<iostream>
using namespace std;
int main()
{
    int y,d,m;
    cin>>y;
    if(y<1918)
    {
    if(y%4==0)
    {
        d=12;
        m=9;
    }
    else
    {
        d=13;
        m=9;
    }

    }
    if (y > 1918) {
      if (y % 400==0 ||(y%4==0 && y%100!=0)) {
        d = 12;
        m = 9;
      } else {
        d = 13;
        m = 9;
      }
    }
    if(y==1918)
    {
        d=26;
        m=9;
    }

      cout << d << '.' << '0' << m << '.' << y;

      return 0;
}
