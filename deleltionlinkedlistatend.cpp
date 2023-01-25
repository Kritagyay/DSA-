#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void deleteend (Node **head)
{
    Node *ptr = *head;
    Node *ptr1;

    if (*head == NULL)
    {
        cout << "Empty linked list " << endl;
        return;
    }

    if (ptr->next == NULL)
    {
        cout << "value deleted : " << (*head)->data;
        *head = NULL;
        return;
    }

    while (ptr->next!=NULL )
    {
        ptr1=ptr;
        ptr=ptr->next;

    }

    ptr1->next=NULL;

    cout<<" Value deleted "<<ptr->data<<endl;
    free(ptr);
}
void insert(Node** head, int data){

    Node* newNode = new Node();
    
    newNode->data = data;
    newNode->next = *head;

    // assigned head to newNode
    *head = newNode;
}

void display(Node* temp){
    cout << "\nLinked List: ";

    //as linked list will end when Node is Null
    while(temp!=NULL){
        cout << temp->data << " "; 
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    
    insert(&head,4);
    insert(&head,5);
    insert(&head,6);
    insert(&head,7);
    insert(&head,8);
    insert(&head,9);
    insert(&head,10);

    display(head);
    
    deleteend(&head);
    deleteend(&head);
    deleteend(&head);
    display(head);
    
    return 0;  
}
