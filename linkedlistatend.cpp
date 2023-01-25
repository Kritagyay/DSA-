#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
void insertattail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void print(Node*&head)
{
    Node* temp = head;
 
    while (temp != NULL) {
        cout << temp->data << " ";
        
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()

{
    Node *head = NULL;
    insertattail(head, 4);
    insertattail(head, 5);
    cout << "After insertion at tail: ";
    print(head);
    cout << endl;

    return 0;
}