#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, row, space;
    cout<<"Enter the Number of Rows: ";
    cin>>row;
    space = row-1;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
        cout<<endl;
    }
    space = 1;
    for(i=1; i<=(row-1); i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space++;
        for(j=1; j<=(2*(row-i)-1); j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;

}