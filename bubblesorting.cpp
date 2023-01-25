#include <bits/stdc++.h>
using namespace std;
void sort (int arr[],int n)
{
    int i,j;
    for(i=0;i<=n-1;i++)
        for(j=0;j<n-1;j++)
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
}
void parray(int arr[],int size)
{
int i;
for(i=0;i<size;i++)
cout<<arr[i]<<" ";
cout<<endl;
}

int main()
{
int arr[]={3,6,2,8,9,10,4,5,1,7} ;
int N =sizeof (arr)/sizeof (arr[0]);
    sort(arr,N);
    cout<<"Sorted Array "<<" ";
    parray (arr,N);
 return 0;
}