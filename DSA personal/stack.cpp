#include <bits/stdc++.h>

using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow " << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
            cout << "Stack is Underflow " << endl;
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];

        else
        {
            cout << "Stack is Empty " << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;

        else
            return false;
    }
};

int main()

{
    Stack obj(5);

    obj.push(6);
    obj.push(10);
    obj.push(15);
    obj.push(27);
    obj.push(8);
    obj.push(5);

cout<<obj.peek()<<endl;

obj.pop();
cout<<obj.peek()<<endl;

obj.pop();
cout<<obj.peek()<<endl;

obj.pop();
cout<<obj.peek()<<endl;

obj.pop();
cout<<obj.peek()<<endl;

if(obj.isEmpty())
{
    cout<<"STack is empty bro"<<endl;
}
else 
cout<<"Stack is not empty bro"<<endl;





        return 0;
}