#include <bits/stdc++.h>

using namespace std;

bool ispossible(int arr[], int size, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;

    for (int i = 0; i < size; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
           
            pagesum = arr[i];
        }
    }
    return true;
}

int binarysearch(int arr[], int size, int m)
{
    int s = *min_element(arr, arr + size); // this is the inbuilt library function to find the minimum element of array
    int ans = -1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (ispossible(arr, size, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
    }
    mid = s + (e - s) / 2;
    return ans;
}
int main()

{
    int m;
    cout << "Enter the number of students in which the book has to be allocated " << endl;
    cin >> m;
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    binarysearch(arr, size, m);

    return 0;
}