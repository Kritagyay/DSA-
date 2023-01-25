#include <bits/stdc++.h>

using namespace std;
class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int s)
    {
        if (rear==size)
            cout << "Queue is full" << endl;
        else
        {
            arr[rear] = s;
            rear++;
        }
    }

    int pop()
    {
        if (rear == front)
           // cout << "You cannot pop element as it is empty" << endl;
            return -1;

        else
        {
            int ans=arr[front];
            arr[front] = -1;
            front++;

            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    bool isempty()
    {
        if (front == rear)
            return true;
        else
            return false;
    }

    int frontelement()
    {
        if (rear == front)
            //cout << "Queue is empty" << endl;
            return -1;
        else
        {
            return arr[front];
        }
    }
};
int main()

{
    Queue q1(5);
    q1.push(4);
    q1.push(3);
    q1.push(5);
    q1.push(6);

  cout<<q1.pop()<<endl;
    return 0;
}