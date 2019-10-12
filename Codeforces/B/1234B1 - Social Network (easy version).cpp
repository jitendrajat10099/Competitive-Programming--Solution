#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	deque < int > screen; //represent screen
	set <int> s; 
	int n,k,id,i,currentno=0,temp;


	cin>>n>>k;
	
	for(i=1;i<=n;i++)
	{ 
		cin>>id;

		//if id is in set  do nothing
		if(s.count(id))
		continue;

		if(screen.size()==k)
		{
			s.erase(screen.front());
			screen.pop_front();
		}
		s.insert(id);
		screen.push_back(id);
	}
	cout<<screen.size()<<endl;
	while(!screen.empty())
	{
		cout<<screen.back()<<" ";
		screen.pop_back();
	}
	

}
