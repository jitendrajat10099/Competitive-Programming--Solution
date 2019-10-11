/*
https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/tutorial/
*/

#include<iostream>
using namespace std;
int maxx=0;//to store max path
struct node
{
    int data;
    struct node* left;
    struct node* right;
};


//Maximum depth/height of a tree
int maxDepth(struct node* node)
{
    if(node==NULL)
    return 0;

    //compute depth of each subtree
    int lDepth = maxDepth(node->left);
    int rDepth = maxDepth(node->right);

    //stores max path
    if(maxx<lDepth+rDepth+1)
    maxx=lDepth+rDepth+1;
    //use the larger one
    if(lDepth > rDepth)
        return lDepth+1 ;
    else
        return rDepth+1;
}

int main()
{
   int t,x;
   cin>>t>>x;
   struct node* root=(struct node*)malloc(sizeof(node));
   root->data=x;
   root->left=root->right=NULL;
   
   while(--t)
   {
       string s;
       char current;
       int value;
        struct node* c=root;

       cin>>s;
       for(int i=0; i<s.length() ;i++)
       {
           if(s[i]=='L')
           {
               if(c->left==NULL)
               c->left=(struct node*)calloc(1,sizeof(struct node));
               c=c->left;
           }
           else
           {
               if(c->right==NULL)
               c->right=(struct node*)calloc(1,sizeof(struct node));
               c=c->right;
           }
       }

        cin>>value;
        c->data=value;
   }
   int ans = maxDepth(root); //ans is not required but return type of maxDepth is int
   cout<<maxx; //max was global
   
}
