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
    Node*newnode=new Node();
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    cout<<"Inserted ITem: "<<newnode->data<<endl;
}

void deletenode(Node *&head, Node*&tail,int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
         prev->next = curr->next;
        tail=prev;
        curr->next = NULL;
        free(curr);
    }
}
void print(Node*&head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()

{
    Node*head=NULL;
     Node*tail=NULL;
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    print (head);

    //deletenode(head,2);
    // deletenode(head,tail,5);
    // print(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;

    return 0;
}