#include <bits/stdc++.h>

using namespace std;
int ispossible(int arr[],int n,int m,int mid)
{
    int painter=1;
    int totaltime=0;

    for (int i = 0; i <n; i++)
    {
        if(totaltime+arr[i]<=mid)
        return true;

        else
        {
            painter++;
            if(painter>m || arr[i]>mid)
            return false;

            totaltime=arr[i];

        }
    }
    
    return true;
}
int paintersproblem(int arr[],int size)
{
    int s=0;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int mid=e+(s-e)/2;
    int ans=-1;

    while(s<=e)
    {
        if (ispossible(arr,size,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else 
        s=mid+1;
    }
}

