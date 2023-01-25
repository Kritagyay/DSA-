#include <bits/stdc++.h>

using namespace std;
char getmaxcharacter(string s)
{
    int arr[26] = {0};
    char ch;
    int number = 0;
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i];
        if (ch >= 'a' && ch < 'z')
        {
            number = ch - 'a';
        }

        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1,ans=0;
    for (int i = 0; i <26; i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
}


int main()

{
    string s;
    cin >> s;
    cout << getmaxcharacter(s) << endl;

    return 0;
}