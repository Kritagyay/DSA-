#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,6,4,2,3,8,11,7,5};
    int cnt=0;
    int count=0;
    int N = sizeof(arr) / sizeof(arr[0]);
     
    for (int i = 0; i <N; i++)
    {
      
       if (arr[i]%2==0)
       {
        cout<<arr[i]<<" is even\n";
        cnt++;
        
       }
       else{
        cout<<arr[i]<<" is odd\n";
       count++;
       }
    }
 cout<< "The number of even terms are in total is "<<cnt<<"\n";
cout<<"The number of odd terms are "<<count;

    return 0;
}