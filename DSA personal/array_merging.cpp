#include <bits/stdc++.h>

using namespace std;

void merge(int nums1[], int n, int nums2[], int m)
{
//     int i = 0, j = 0, k = 0;
//     while (i < n && j < m)
//     {
//         if (arr[i] < arr1[j])
//         {
//             arr3[k]=arr[i];
//             i++;
//             k++;
//         }
//         else{
//             arr3[k]=arr1[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<n)
//     {
//         arr3[k]=arr[i];
//         k++;
//         i++;
//     }
//     while(j<m)
//     {
//         arr3[k]=arr1[j];
//         k++;
//         j++;
//     }
// }
// int main()

// {
//     int arr[] = {1, 3, 5, 7, 9};
//     int arr1[] = {2, 4, 6, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int m = sizeof(arr1) / sizeof(arr1[0]);
//     int arr3[n + m]={0};

//     merge(arr, n, arr1, m, arr3);

//     for (int i = 0; i <n+m; i++)
//     {
//         /* code */cout<<arr3[i]<<" ";
//     }
    
//     return 0;
// }

  
        int i=0,j=0,k=n+m-1 ;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                nums1[k]=nums1[i];
                k--;
                i++;
            }
            else
            {
                nums1[k]=nums2[j];
                k--;
                j++;
            }
        }
        while(i<m)
        {
            nums1[k]=nums1[i];
            i++;
            k--;
        }
        while(j<n)
        {
            nums1[k]=nums2[j];
            j++;
            k--;
        }
}
    
    int main()

{
    int nums1[] = {1, 3, 5, 7, 9};
    int nums2[] = {2, 4, 6, 8};
    int n = sizeof(nums1) / sizeof(nums1[0]);
    int m = sizeof(nums2) / sizeof(nums2[0]);
    

    merge(nums1, n, nums2, m);

    for (int i = 0; i <n+m; i++)
    {
        /* code */cout<<nums1[i]<<" ";
    }
    
    return 0;
}
