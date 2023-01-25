#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *next;
};

void push(node **headref, int newdata)
{
    node *newnode = new node();
    newnode->data = newdata;
    newnode->next = (*headref);
    (*headref) = newnode;
}

void printlist(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()

{
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
     
    push(&head,0);
    printlist(head);

    return 0;
}