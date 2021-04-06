int lcs(int x, int y, string s1, string s2){
    vector<int> prev(y+1,0);
    vector<int> cur(y+1,0);
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                // dp[i][j]=dp[i-1][j-1]+1;
                cur[j]=prev[j-1]+1;
            }
            else
            {
                cur[j]=max(prev[j],cur[j-1]);
                // dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        prev.assign(cur.begin(),cur.end());
        fill_n(cur.begin(),y+1,0);
    }
    return prev[y];
