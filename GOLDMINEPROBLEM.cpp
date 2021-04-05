

class Solution{
public:
    int dp[55][55];
    int fun(int c,int r,vector<vector<int>>& grid,int n,int m)
    {
        if(c==m)
        {
            return 0;
        }
        if(dp[r][c]!=-1) return dp[r][c];
        int ans=0;
        int dx[3]={+1,+1,+1};
        int dy[3]={+1,-1,0};
        for(int i=0;i<3;i++)
        {
            if(r+dy[i]<0 or r+dy[i]>=n)
            {
                continue;
            }
            else
            {
                ans=max(ans,grid[r][c]+fun(c+dx[i],r+dy[i],grid,n,m));
            }
        }
        return dp[r][c]=ans;
    }
    int maxGold(int n, int m, vector<vector<int>> grid)
    {
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,fun(0,i,grid,n,m));
        }
        return ans;
    }
};

