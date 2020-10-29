#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
freopen("a.in","r",stdin);
//freopen("a.out","w",stdout);
int b,l,d;
cin >> b >> l >> d; //b books l library d days
int p[b];       // price values
for(int i=0;i<b;i++)
{
    cin >> p[i];
}
int book_spec[l][3];
int counter = 0;
int temp;
vector<int>b_id[l];
vector< pair<int,int> >vec[l];  // price + id of books for given library
vector< pair<int,int> >shipping_books;   //vector containing no of books shipped in one day per library + id
vector<int>store_ans[l];
vector<int>store_id;

std::vector<int>::iterator it;

int l_temp = l;
while(l--)
{
    for(int i=0;i<3;i++)
    {cin >> book_spec[counter][i];}

    shipping_books.push_back(make_pair(book_spec[counter][2],counter));

    for(int j=0;j<book_spec[counter][0];j++)
    {
        cin >> temp;
        b_id[counter].push_back(temp);
        vec[counter].push_back(make_pair(p[temp],temp));
    }
    counter++;
}
//cout << "counter : " << counter << "\n";
sort(shipping_books.begin(),shipping_books.end());
//cout << "original vector" << "\n";

int start_the_count_na = 0;

//cout << "sorted by price" << "\n";
//cout << (vec[1][0]).first << "\n";

int max_books;
counter = 0;
int counter1 = 0;
vector<int>ans;
int size_measure;
int c = 0;

while(start_the_count_na < l_temp)
{   //cout << start_the_count_na << "\n";
    sort(vec[start_the_count_na].begin(),vec[start_the_count_na].end(),sortinrev);
    start_the_count_na++;
}

while(true)
{
   max_books = (d - book_spec[shipping_books[counter].second][1])*book_spec[shipping_books[counter].second][2];
   int books_can_send = min(max_books,book_spec[shipping_books[counter].second][0]);
   if(books_can_send > 0)
   {
   //cout << "library and max_books can send" << "\n";
   //cout << shipping_books[counter].second << " " << books_can_send << "\n";
   }
   size_measure = ans.size();
   counter1 = 0;
   //cout << "size it visits" << v[shipping_books[counter].second].size() << "\n";
   for(int i=0;i<vec[shipping_books[counter].second].size();i++)
   {   if(counter1 < books_can_send)
     {

       it = find(ans.begin(),ans.end(),(vec[shipping_books[counter].second][i]).second);
       if(it != ans.end())
        continue;
       else
       {
       ans.push_back((vec[shipping_books[counter].second][i]).second);
       //cout << "book ids " << "\n";
       //cout << (vec[shipping_books[counter].second][i]).second << " ";
       store_ans[c].push_back((vec[shipping_books[counter].second][i]).second);
       counter1++;
       }
     }
     else
        break;
   }
   //cout << "\n";
   if(size_measure != ans.size())
   {
    d -= book_spec[shipping_books[counter].second][1];
    store_id.push_back(shipping_books[counter].second);
    c++;
   }

   if(d <= 0)
    break;

   counter++;

   if(counter == l_temp)
    break;
}
  cout << c << "\n";
  for(int i=0;i<c;i++)
  {
      cout << store_id[i] << " " << store_ans[i].size() << "\n";
      for(int j=0;j<store_ans[i].size();j++)
        cout << store_ans[i][j] << " ";

      cout << "\n";
  }
return 0;
}
