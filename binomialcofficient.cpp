// fun(n-,r-1)+fun(n-1,r)
class Solution{
public:
    int dp[1001][801];
    int fun(int n,int r)
    {
        if(r>n)
        {
            return 0;
        }
        if(r==0 or r==n)
        {
            return 1;
        }
        if(dp[n][r]!=-1)
        {
            return dp[n][r];
        }
        return dp[n][r]=(fun(n-1,r-1)+fun(n-1,r))%1000000007;
    }
    int nCr(int n, int r){
        memset(dp,-1,sizeof(dp));
        return fun(n,r);
    }
};
