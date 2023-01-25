// #include <bits/stdc++.h>     // SELECTION SORT

// using namespace std;
// void selectionsort(int arr[],int size)
// {
//     for (int i = 0; i < size-1; i++)
//     {
//         int min_index=i;
//         for (int j = i+1; j < size; j++)
//         {
//             if(arr[min_index]>arr[j])
//                 min_index=j;

//         }
//         swap(arr[min_index],arr[i]);
        
//     }
    
// }
// int main()

// {
// int arr[]={64,25,12,22,11};
// int size=sizeof(arr)/sizeof(arr[0]);

// selectionsort(arr,size);
// for(int i=0;i<size;i++)
// {
//     cout<<arr[i]<<" ";
// }
    

//     return 0;
// }

//BUBBLE SORT
// #include <bits/stdc++.h>

// using namespace std;
// void bubblesort(int arr[],int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i+1; j< size; j++)
//         {
//             if(arr[i]>arr[j])
//             swap(arr[i],arr[j]);
//         }
        
//     }
    
// }
// int main()

// {
// int arr[]={64,25,12,22,11};
// int size=sizeof(arr)/sizeof(arr[0]);
// bubblesort(arr,size);
// for(int i=0;i<size;i++)
// {
//     cout<<arr[i]<<" ";
// }
//      return 0;
// }

#include <bits/stdc++.h>

using namespace std;
void insertionsort(int arr[],int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp=arr[i];
        int j = i-1; 
       for (; j >0; j--)
       {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            break;
       }
       arr[j+1]=temp;
    }
    
}
int main()

{
int arr[]={64,25,12,22,11};
int size=sizeof(arr)/sizeof(arr[0]);
insertionsort(arr,size);
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}