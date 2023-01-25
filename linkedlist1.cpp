#include <bits/stdc++.h>

using namespace std;
class Node
{
    public:
    int data ;
    Node*next;
};

void insert(Node**head,int data)
{
    Node*newnode=new Node();
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;
    cout<<"Inserted ITem: "<<newnode->data<<endl;
}
void printlist(Node*node)
{
cout<<"\n lINKED LIST IS :";
while(node!=NULL)
{
    cout<<node->data<<" ";
    node=node->next;

}
cout<<endl;
}

int main(){

    Node* head = NULL;

    insert(&head,4);
    insert(&head,5);
    insert(&head,6);
    insert(&head,7);
    insert(&head,8);
    insert(&head,9);

    printlist(head); 
    
    return 0;  
}

