#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int count = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int m[n][n];
        int r = 0,c = 0,trace = 0;
        int flag = 0;
        int temp[n+1];
        for(int i=0;i<n;i++)
        {
            memset(temp,0,sizeof(temp));
            flag = 0;
            for(int j=0;j<n;j++)
            {
                cin >> m[i][j];
                if(temp[m[i][j]] == 1 && flag == 0)
                {
                    r++;
                    flag++;
                }
                else
                temp[m[i][j]] = 1;

                if(i == j)
                trace += m[i][j];
            }
        }

        for(int i=0;i<n;i++)
        {  memset(temp,0,sizeof(temp));
           flag = 0;
            for(int j=0;j<n;j++)
            {
                if(temp[m[j][i]] == 1 && flag == 0)
                {c++;
                 flag++;
                }
                else
                temp[m[j][i]] = 1;
            }
        }
        cout << "Case #" << count << ": " << trace << " " << r << " " << c << "\n";
        count++;
    }
}
