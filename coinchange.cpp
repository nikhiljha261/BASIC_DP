
class Solution
{
  public:
    long long int count( int a[], int m, int n )
    {
       
        //code here.
        long long int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int j=0;j<m;j++)
        {
            for(int i=0;i<=n;i++)
            {
                if(i-a[j]>=0)
                {
                    dp[i]+=dp[i-a[j]];
                }
            }
        }
        return dp[n];
    }
};
