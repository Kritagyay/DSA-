#include <bits/stdc++.h>

using namespace std;
class Node
{
    public:
    int data;
    Node*next;
};

void insert(Node*&head,int data)
{
    Node*newnode=new Node ();
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    cout<<"Inserted item - "<<newnode->data<<endl;

}

void deletenode(Node*head,int pos)
{
    if(pos==1)
    {
       Node*temp=head;
       head=temp->next;
       temp->next=NULL;
       free(temp);
    }

    else
    {
        int cnt=1;
        Node*prev=NULL;
        Node*curr=head;

        while(cnt<pos)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        
        prev->next=curr->next;
        curr->next=NULL;
        free(curr);
    }
}
void print(Node *head)
{
    Node *temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()

{
    Node*head=NULL;
   
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    print(head);


    return 0;
}