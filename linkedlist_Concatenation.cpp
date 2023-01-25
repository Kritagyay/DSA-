#include <bits/stdc++.h>

using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};

void insert(Node*&head,int data)
{
    Node *newnode=new Node();
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    cout<<"Inserted Item "<<newnode->data<<endl;
}
void display(Node*&head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void Concatenate(Node*list1,Node*list2)
{
    Node*temp=list1;
    // Node*temp2=list2;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=list2;
}

int main()

{
Node*List1=NULL,*List2=NULL;

//Creation of 1st linked list
insert(List1,1);
insert(List1,5);
insert(List1,4);
insert(List1,3);
insert(List1,2);
display(List1);

//Creation of 2nd Linked List
insert(List2,9);
insert(List2,10);
insert(List2,11);
insert(List2,12);
display(List2);
Concatenate (List1,List2);
    display(List1);

    return 0;
}