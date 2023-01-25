// #include <bits/stdc++.h>

// using namespace std;
// bool ispossible(vector<int>&stalls,int k,int mid)
// {
//     int Cowcount=1;
//     int last_pos=stalls[0];

//     for (int i = 0; i <stalls.size(); i++)
//     {
//         if(stalls[i]-last_pos>=mid)
//         {
//             Cowcount++;
//             if(Cowcount==k)
//             {
//                 return true;
//             }
//             last_pos=stalls[i];
//         }
//     }
//     return false;

// }
// int agressive_cows(vector<int>&stalls,int k)
// {
//     sort(stalls.begin(),stalls.end());

//     int s=*min_element(stalls.begin(),stalls.end());
//     int a=*max_element(stalls.begin(),stalls.end());
//     int e=a-s;
//     int ans=-1;


//     int mid=s+(e-s)/2;
     
//     while(s<=e)
//     {
//         if(ispossible(stalls, k, mid))
//         {
//             ans=mid;
//             s=mid+1;
//         }
//         else
//         e=mid-1;

//     }
//     mid=s+(e-s)/2;
// }
// int main()

// {
// int ;
    

//     return 0;
// }



bool ispossible(vector<int>&stalls,int k,int mid)
{
    int Cowcount=1;
    int lastpos=stalls[0];
    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-lastpos>=mid)
        {
           Cowcount++;
            if(Cowcount==k)
                {
                    return true;
                }

        lastpos=stalls[i];
        }
    }
  
return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;
    int mini=*min_element(stalls.begin(),stalls.end());
    int maxi=*max_element(stalls.begin(),stalls.end());
    int e=maxi-mini;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(ispossible(stalls,k,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
          mid=s+(e-s)/2;
    }
    return ans;
}