// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends





// User function Template for C++

class Solution{
public:
    int equalPartition(int n, int a[])
    {
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        if(s%2!=0) return 0;
        s=s/2;
        // cout<<s;
        bool dp[s+1][n+1];
        for(int i=0;i<=s;i++)
        {
            for(int j=0;j<=n;j++)
            {
                dp[i][j]=false;
            }
        }
        for(int i=0;i<=n;i++)
        {
            dp[0][i]=true;
        }
        
        for(int i=0;i<=s;i++)
        {
            dp[i][0]=false;
        }
        dp[0][0]=true;
        for(int i=1;i<=s;i++)
        {
            for(int j=1;j<=n;j++)
            {
                    dp[i][j]=dp[i][j-1];
                
                    if(i-a[j-1]>=0)
                    {
                        dp[i][j]=dp[i-a[j-1]][j-1] or dp[i][j];
                    }
                
            }
        }
        if(dp[s][n]==true)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        

    }
};


