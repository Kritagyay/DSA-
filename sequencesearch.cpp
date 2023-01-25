#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int x;
    cin>>x;
    int N = sizeof(arr) / sizeof(arr[0]);
 
   int cnt = 0;
       for (int i =0; i<N;i++)
       {
        if (arr[i]==x)
        {
            cnt++;
        cout<<"The number you have enterd is at position "<<i;
        }
       }
       if(cnt==0)
        cout<<"the element is not present";
        
    return 0;
}
