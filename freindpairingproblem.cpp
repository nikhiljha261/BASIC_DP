// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        // code here
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
        {
            dp[i]=(dp[i-1]+((i-1)*dp[i-2])%1000000007)%1000000007;
        }
        return dp[n]%1000000007;
    }
};    
