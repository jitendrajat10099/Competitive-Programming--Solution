#include<bits/stdc++.h>

using namespace std;

bool sort_by_first(const pair<int,int>&a, const pair<int,int>&b)
{
    return(a.first < b.first);
}

int main()
{
    int t;
    cin >> t;
    int number = 1;
    while(t--)
    {   vector< pair<char,int> >vec;
        vector<pair <int,int> >points;
        map<int,int>mapping;
        int n;
        int flag = 0;
        cin >> n;
        int s[n],e[n];
        char ans[n+2];
        int check[1441];
        memset(check,0,sizeof(check));
        for(int i=0;i<n;i++)
        {
            cin >> s[i] >> e[i];
            points.push_back(make_pair(s[i],e[i]));
            //cout << 1440*check[s[i]] + s[i] << " " << e[i] << " " << i << "\n";
            mapping.insert(make_pair((1440*check[s[i]])+s[i],i));
            check[s[i]]++;
        }
        stable_sort(points.begin(),points.end(),sort_by_first);
       /* vector< pair<int,int> >::iterator it;
        for(it = points.begin();it != points.end();it++)
        {
            cout << it->first << " " << it->second << "\n";
        } */

        vec.push_back(make_pair('J',0));
        vec.push_back(make_pair('C',0));
        int check_flag = 0;
        int searching;
        for(int i=0;i<n;i++)
        { if(i > 0)
            {
                if(points[i].first == points[i-1].first)
                {  check_flag++;
                   searching = (1440*check_flag) +  points[i].first;
                }
                else
                {
                    check_flag = 0;
                    searching = (1440*check_flag) +  points[i].first;
                }
            }
          else
             searching  = points[i].first;

            if(vec[0].second <= points[i].first)
            {
                ans[mapping[searching]] = vec[0].first;
                vec[0].second = points[i].second;
            }
            else if(vec[1].second <= points[i].first)
            {
                ans[mapping[searching]] = vec[1].first;
                vec[1].second = points[i].second;
            }
            else
            {
                flag = 1;
                break;
            }
        }
       if(flag == 1)
       {
           cout << "Case #" << number << ": " << "IMPOSSIBLE" << "\n";
           number++;
       }
       else
       {
           cout << "Case #" << number << ": ";
           for(int i=0;i<n;i++)
           {
               cout << ans[i];
           }
           cout << "\n";
           number++;
       }
    }
    return 0;
}
