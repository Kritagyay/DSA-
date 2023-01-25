#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head,int d)
{
    Node*temp = new Node(d); 
    temp->next=head;
    head=temp;
}

void insertAtTail(Node*&tail,int d)
{
    Node*temp=new Node (d);
    tail->next=temp;
    tail=temp;
}



void insertAtNode(Node *&head, Node *&tail, int position, int d)
{
    if (position==1)
    {
        insertAtHead(head,d);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    Node *nodeinsert = new Node(d);
    nodeinsert->next = temp->next;
    temp->next = nodeinsert;
}

void print (Node *&head)
{
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()

{
    Node*newnode=new Node(1);
    Node*head=newnode;
    Node*tail=newnode;

    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,1);
    print(head);

    insertAtNode(head,tail,3,21);
    print (head);
    return 0;
}