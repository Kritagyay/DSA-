#include <bits/stdc++.h>

using namespace std;

bool bsearch(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == x)
        {
            return true;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;

        mid = start + (end - start) / 2;

        // for (int i = 0; i <= n; i++)
        // {
        //     if (arr[i] > arr[i - 1])
    }
    return false;
}

int main()

{
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x ;
    cout<<"Enter the value to be searched of :";
    cin>>x;
    cout << ::boolalpha << bsearch(arr, n, x);

    return 0;
}