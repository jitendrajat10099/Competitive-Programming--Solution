#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int number = 1;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        int a[l];
        char ans[10000];
        for(int i=0;i<l;i++)
        {a[i] = s[i] - 48;
        //cout << a[i] << " ";
        }
        int mini[l];
        for(int i=(l-1);i>=0;i--)
        {
            if(i == (l-1))
            mini[i] = a[i];
            else
            mini[i] = min(a[i],mini[i+1]);
        }
        int count = 0;
        int ini = 0;
        int o_b;
        int c_b;
        for(int i=0;i<l;i++)
     {
          if(ini <= a[i])
         {
          o_b = a[i] - ini;
          int temp = o_b;
          while(temp--)
          {
              ans[count] = '(';
              count++;
              ini++;
          }
          ans[count] = s[i];
          count++;
          if(i != (l-1))
          {
          /*c_b = a[i] - mini[i];
          if(a[i] == a[i+1])
          c_b = 0; */
          c_b = a[i] - a[i+1];
          if(c_b < 0)
            c_b = 0;
          }
          else
          {
              c_b = ini;
          }
          while(c_b--)
          {
              ans[count] = ')';
              count++;
              ini--;
          }
        }
     }
      cout << "Case #" << number << ": ";
      for(int i=0;i<count;i++)
        cout << ans[i];
      cout << "\n";
      number++;
    }
    return 0;
}
