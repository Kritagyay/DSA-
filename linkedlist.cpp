// #include <bits/stdc++.h>

// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
// };

// void printlist(node *n)
// {
//     while (n != NULL)
//     {
//         cout << n->data << " ";
//         n = n->next;
//     }
// }

// int main()

// {
//     node *head = NULL;
//     node *second = NULL;
//     node *third = NULL;

//     head = new node();
//     second = new node();
//     third = new node();

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = NULL;

//     printlist(head);

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertatHead(node *&head, int val)
{
    node *n = new node(val);
    head = n;
    return;
}
void insertatTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = n;
    }
}
void deletenode(node *&head, int position)
{
    node *curr = head;
    node *prev = NULL;
    int cnt = 1;
    if (position == 1)
    {
        head=curr->next;
        free(curr);
    }
    else
    {
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        free(curr);
    }
}
void deleteatEnd(node *&head)
{
    node *temp = head;
    node *prev = NULL;
    // node*curr=head;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()

{
    node *head = NULL;
    insertatTail(head, 3);
    insertatTail(head, 4);
    insertatTail(head, 5);
    insertatTail(head, 6);
    insertatTail(head, 7);
    display(head);
    // deleteatEnd(head);
    deletenode(head,1);
    display(head);

    return 0;
}