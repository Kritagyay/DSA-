#include <bits/stdc++.h>

using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node *buildtree(node*root)
{
    cout<<"Enter the value of data"<<endl;
    int data;
    cin>>data;
    root =new node(data);

    if(data=-1)
    {
        return NULL;
    }

    cout<<"Enter the data for inserting in the left of root "<<data<<endl;
    root->left=buildtree(root->left);

    cout<<"Enter the data for inserting in the right of root "<<data<<endl;
    root->right=buildtree(root->right);
    
    return root;
}
int main()

{
    node*root=NULL;
    root=buildtree(root);

    return 0;
}