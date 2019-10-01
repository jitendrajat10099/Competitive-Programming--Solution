#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
vector<ll>adj[100005];
ll vis[100005];
ll ab=0,bc=0,sum=0,n;
ll ann[100005];
ll BIT[100005];
ll BIT1[100005];
ll prefix[100005];
struct node
{
    ll val;
    ll ind;
};
void update(ll x,ll val,ll z)
{
    //cout<<"Coming to update\n";
    //cout<<z<<" "<<x<<" "<<n<<"\n";
    for(;x<=n;x+=x&-x)
    {
        BIT[x]+=val;
        BIT1[x]+=(z-1);
    }
}
ll query(ll x)
{
    //cout<<"Coming to query\n";
    ll sum=0;
    for(;x>0;x-=x&-x)
        sum+=BIT[x];
    return sum;
}
ll query1(ll x)
{
    ll sum=0;
    for(;x>0;x-=x&-x)
        sum+=BIT1[x];
    return sum;
}
ll query2(ll x)
{
    ll sum=0;
    for(;x>0;x-=x&-x)
        sum+=BIT1[x];
    return sum;
}


ll comp(struct node x1,struct node x2)
{
    return (x1.val<x2.val);
}
ll dfs(ll st,ll x)
{
    //cout<<st<<"\n";
    ll i;
    ann[x]=st;
vis[st]=1;
for(i=0;i<adj[st].size();i++)
{
    if(vis[adj[st][i]]==0)
        dfs(adj[st][i],x+1);
}
}
ll dfs3(ll node,ll n,ll ma,ll mi)
{
    ll i;
    //cout<<"Node"<<node<<"\n";
vis[node]=1;
if(node>n)
{
ab++;
bc=bc+(ma-node);
}
for(i=0;i<adj[node].size();i++)
{
    if(vis[adj[node][i]]==0)
    {
    if(n==node)
    {
        ab=0;
        bc=0;
        dfs3(adj[node][i],n,ma,mi);
        sum=sum+(bc-(ab*(ab-1)/2));
        //cout<<"Ab is "<<ab<<" "<<"Bc is "<<bc<<"\n";
        //cout<<sum<<"\n";
    }
    else
    {
            dfs3(adj[node][i],n,ma,mi);
    }
}
}
}
ll dfs2(ll node,ll n,ll ma,ll mi)
{
    ll i;
    //cout<<"Node"<<node<<"\n";
vis[node]=1;
if(node<n)
{
ab++;
bc=bc+(node-1);
}
for(i=0;i<adj[node].size();i++)
{
    if(vis[adj[node][i]]==0)
    {
    if(n==node)
    {
        ab=0;
        bc=0;
        dfs2(adj[node][i],n,ma,mi);
        sum=sum+(bc-(ab*(ab-1)/2));
        //cout<<"Ab is "<<ab<<" "<<"Bc is "<<bc<<"\n";
        //cout<<sum<<"\n";
    }
    else
    {
            dfs2(adj[node][i],n,ma,mi);
    }
}
}
}

ll dfs1(ll node,ll n,ll ma,ll mi)
{
ll i;
//cout<<"Node"<<node<<"\n";
vis[node]=1;
if(node<n)
ab++;
else
bc++;
for(i=0;i<adj[node].size();i++)
{
    if(vis[adj[node][i]]==0)
    {
    if(n==node)
    {
        ab=0;
        bc=0;
        dfs1(adj[node][i],n,ma,mi);
        sum=sum+ab*(ma-bc);
        //cout<<"Ab is "<<ab<<" "<<"Bc is "<<bc<<"\n";
        //cout<<sum<<"\n";
    }
    else
    {
            dfs1(adj[node][i],n,ma,mi);
    }
}
}
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t;
cin>>t;
while(t--)
{
    sum=0;ab=0;bc=0;
    ll l,m,i,j,k,x,y,z,c=0,cent,a,b,flag=0;
    cin>>n;
    for(i=0;i<=n+2;i++)
    {
BIT[i]=0;
BIT1[i]=0;
vis[i]=0;
adj[i].clear();
ann[i]=0;
prefix[i]=0;
    }
    ll arr[n+5]={0};
    cin>>x>>y>>z;
    for(i=0;i<n-1;i++)
    {
        cin>>l>>m;
        arr[l]++;
        arr[m]++;
        adj[l].push_back(m);
        adj[m].push_back(l);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]==n-1)
        {
            cent=i;
            flag=1;
            break;
        }
    }
    ll findpath=0;
    for(i=1;i<=n;i++)
    {
        if(arr[i]==1 && findpath<2)
            findpath++;
        else if(arr[i]!=2)
        {
            break;
        }
    }
    if(i==n+1)
        flag=2;
    //cout<<flag<<"\n";
    a=cent-1;
    b=n-cent;
    if(flag==1)
    {
        //cout<<"Coming to star\n";
        if((z>y && y>x)||(z<y && y<x))
        {
            cout<<(a*b)<<"\n";
        }
        else if(y>x && z<y)
        {
            cout<<((a-1)*a/2)<<"\n";
        }
        else
            cout<<((b-1)*b/2)<<"\n";
    }
    else if(flag==2)
    {
//cout<<"hello world\n";
ll sm1,sm2,lg1,lg2,index,a,b,st;
struct node arre[n+5];
for(i=1;i<=n;i++)
{
    if(adj[i].size()==1)
    {
        st=i;
        break;
    }
}
//cout<<"St is"<<st<<"\n";
dfs(st,0);
for(i=0;i<n;i++)
{
    //cout<<ann[i]<<" ";
    prefix[i+1]=prefix[i]+ann[i];
    //cout<<prefix[i+1]<<"\n";
}
 //cout<<"\n";
ll ans[n+5]={0}; 
ll pre[n+5]={0}; 
for(i=0;i<n;i++)
{
    arre[i].val=ann[i];
    arre[i].ind=i;
}
//cout<<n<<"\n";
sort(arre,arre+n,comp);
for(i=0;i<n;i++)
{

    ans[i+1]=query(arre[i].ind);
    pre[i+1]=query1(arre[i].ind);
    //cout<<query(arre[i].ind)<<"\n";
    //cout<<query1(arre[i].ind)<<"\n";
    update(arre[i].ind+1,1,arre[i].val);
}
// cout<<"\n";
ll aaa=0,bbb=0,lnm=0,ccc=0,ccc1=0,ccc2=0,ccc3=0,ccc4=0;
for(i=1;i<=n;i++)
{
index=arre[i-1].ind;
//cout<<"Index is"<<index<<"\n";
//cout<<ans[i]<<" "<<pre[i]<<"\n";
sm1=ans[i];
sm2=i-1-ans[i];
lg1=index-sm1;
lg2=n-index-1-sm2;
        if((z>y && y>x)||(z<y && y<x))
        {
            aaa+=((sm1*lg2)+(sm2*lg1));
            //cout<<((sm1*lg2)+(sm2*lg1))<<"\n";
        }
        else if(x<y && z<y)
        {
            //cout<<"Pre"<<pre[i]<<"\n";
            bbb+=(pre[i]-((sm1-1)*sm1)/2);
            lnm=((i-1)*(i)/2)-(pre[i]+sm1)-sm2;
            bbb+=(lnm-((sm2-1)*sm2)/2);
             //cout<<bbb<<"\n";
            //cout<<"Lnm is "<<lnm<<"\n";
        }
        else
        {
            ccc=prefix[index]-(pre[i]+sm1);
            ccc1=lg1*n-ccc-((lg1-1)*lg1)/2;
            ccc2=(n*(n+1)/2)-((i)*(i+1)/2)-ccc;
            //cout<<ccc<<"\n";
            //cout<<ccc2<<"\n";
            ccc3=lg2*n-ccc2-((lg2-1)*lg2)/2;
            ccc4+=ccc1+ccc3;
            //cout<<ccc4<<"\n";
        }
//cout<<sm1<<" "<<lg1<<" "<<sm2<<" "<<lg2<<"\n";
}
        if((z>y && y>x)||(z<y && y<x))
        {
            cout<<aaa<<"\n";
        }
        else if(y>x && z<y)
        {
            cout<<bbb<<"\n";
        }
        else
            cout<<ccc4<<"\n";
    }
    else
    {
for(i=1;i<=n;i++)
{
    for(j=0;j<=n;j++)
        vis[j]=0;
    if((x>y && y>z)||(x<y && y<z))
    {
        //cout<<"hello\n";
    dfs1(i,i,n-i,1);
}
else if(x<y && z<y)
    dfs2(i,i,n,1);
else
    dfs3(i,i,n,1);
}
cout<<sum<<"\n";
}
}
}
