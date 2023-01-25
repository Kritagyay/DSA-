// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         string s;
//         int n;
//         cin>>n;
//         cin>>s;
       
//         int ans=1;
//         for(int i=1;i<n;i++)
//         {
//             if (s[i]=='0')
//             break;
            
//             else 
//             ans++;
//         }
//         cout<<ans<<endl;
        
//     }
// 	return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        
        
        int ans=1;
        for(int i=1;i<n;i++)
        {
            if (s[i]=='1')
            break;
            
            else 
            ans++;
        }
        cout<<ans<<endl;
        
    }
	return 0;
}
