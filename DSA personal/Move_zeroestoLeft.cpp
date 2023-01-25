#include <bits/stdc++.h> 
using namespace std;
void moveZerosToLeft(int *arr, int n) 
{
    // Write your code here
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }

}
int main()
{
    int n=3;
    int arr[]={9,4,0};
     moveZerosToLeft(arr,n);
     for (int  i = 0; i < n; i++)
     {
        /* code */cout<<arr[i]<<" ";
     }
     
    return 0;
}


