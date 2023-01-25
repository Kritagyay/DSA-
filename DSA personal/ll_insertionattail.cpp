#include <bits/stdc++.h>

using namespace std;
class Node
 {
    public:
    int data;
    Node *next;

    Node (int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(Node*&tail,int d)
{
    Node*temp=new Node (d);
    tail->next=temp;
    tail=temp;
}

void print (Node*&head)
{
    Node *temp=head;
    while (temp!=NULL )
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()

{
Node *node1=new Node(10) ;
Node*head=node1;
Node *tail=node1;
    
    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,1);

    print(head);
    cout<<tail->data;
    return 0;
}