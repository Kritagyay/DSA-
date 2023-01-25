
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,8,1,2,1,9,41,1};
    int size=8;
    int x;
    cin>>x;
    for(int i=0; i<size;i++)
    {
        if (arr[i]==x)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}