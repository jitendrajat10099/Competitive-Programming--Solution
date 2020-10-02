//https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1

Node *flatten(Node *root)
{
    vector<int>v;
    Node*head=NULL,*temp,*prev=NULL;
    Node*temp1=root;
    for(;temp1!=NULL;temp1=temp1->next)
    {
        for(Node*temp2=temp1;temp2!=NULL;temp2=temp2->bottom)
        {
            v.push_back(temp2->data);
            //cout<<temp2->data;
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        Node*t=new Node(v[i]);
        t->next=NULL;
        if(head==NULL)
        {
            head=t;;
            prev=head;
           // cout<<"Hi";
        }
        else
        {
            prev->bottom=t;
            prev=t;
            //cout<<"bye";
            
        }
    }
    Node*m=head;
    
    return head;
   // Your code here
}
