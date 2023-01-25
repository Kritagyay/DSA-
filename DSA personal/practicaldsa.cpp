#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()

{
    int arr[6] = {5, 8, 9, 3, 4, 7};
    cout<<"Unsorted Array is "<<endl;
    printarray(arr,6);
    bubblesort(arr, 6);
    cout<<"Sorted Array is "<<endl;
    printarray(arr, 6);

    return 0;
}