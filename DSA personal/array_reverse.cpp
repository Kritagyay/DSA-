#include <bits/stdc++.h>

using namespace std;

int main()

{
int arr[]={1,6,7,9,5,2,3,6};
int size=sizeof(arr)/sizeof(arr[0]);

int s=0;
int e=size-1;
while(s<=e)
{
    swap(arr[s],arr[e]);
    s++;
    e--;
}
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}