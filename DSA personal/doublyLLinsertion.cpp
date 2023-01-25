#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
        cout << "Inserted item at head " << temp->data << endl;
    }
    else
    {
        Node *temp = new Node(d);

        temp->next = head;
        head->prev = temp;
        tail = head;
        head = temp;
        cout << "Inserted item at head " << temp->data << endl;
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        insertAtHead(head, tail, d);
        return;
    }

    else
    {
        Node *n = new Node(d);
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        n->prev = temp;
        temp->next = n;
        tail = n;
        cout << "Inserted item at tail " << temp->data << endl;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

       Node *temp = head;
        int count = 1;

        while (count < position)
        {
            temp = temp->next;
            count++;
        }

    if (temp->next==NULL)
    {
        insertAtTail(head,tail,d);
        return;
    }

        Node *n=new Node(d);
        n->next = temp->next;
        temp->next->prev = n;
        temp->next = n;
        n->prev = temp;
    }

void print(Node *&head, Node *&tail)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "Data which is present at head " << head->data << endl;
    cout << "Data which is present at tail " << tail->data << endl;
}

// void getlength(Node *&head)
// {
//     int len=0;
//     Node*temp=head;
//     while(temp!=NULL)
//     {
//         len++;
//         temp=temp->next;
//     }
//     cout<<"Length of the Linked list is "<<len<<endl;
// }

int main()

{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 10);
    // insertAtHead(head,tail,  11);
    // insertAtHead(head,tail,  12);

    insertAtTail(head, tail, 21);
    insertAtTail(head, tail, 22);
    insertAtTail(head, tail, 23);

    print(head, tail);

    insertAtPosition(head,tail,3,19);
    print(head,tail );




    return 0;
}