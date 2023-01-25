#include <bits/stdc++.h>

using namespace std;
int largestRowsum(int arr[][4], int i, int j)
{
    int maxi = INT_MIN;
    int rowindex = 0;
    for (int i = 0; i < 3; i++)
    {
        int temp = 0;
        for (int j = 0; j < 4; j++)
        {
            temp += arr[i][j];
        }

        if (maxi < temp)
        {
            maxi = temp;
            rowindex = i;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowindex;
}


void sumarray(int arr[][4], int i, int j)
{
    // Printing Sum
    cout << "Printing the sum " << endl;
    for (int i = 0; i < 3; i++) // row wise sum if we start the loop with i but if we
    // for(int j=0;j<4;j++)    // start the loop with j col wise sum will be produced
    {
        int temp = 0;
        for (int j = 0; j < 4; j++)
        // for(int i=0;i<3;i++)
        {
            temp = temp + arr[i][j];
        }
        cout << temp << " ";
    }
    cout << endl;
}


// bool ispresent(int arr[][4], int target, int i, int j)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }


int main()

{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // int target;
    // cout << "Enter the element to search " << endl;
    // cin >> target;

    // if (ispresent(arr, target, 3, 4))
    // {
    //     cout << "Element Found " << endl;
    // }
    // else
    //     cout << "Element Not Found " << endl;

    sumarray(arr, 3, 4);
    int ansindex=largestRowsum(arr,3,4);
    cout<<"the max sum is present at index "<<ansindex<<endl;
    return 0;
}