int LongestRepeatingSubsequence(string s2){
		    // Code here
		    int x,y;
		    x=s2.length();
		    y=x;
		    string s1=s2;
		    int dp[x+1][y+1];
            memset(dp,0,sizeof(dp));
            for(int i=1;i<=x;i++)
            {
                for(int j=1;j<=y;j++)
                {
                    if(s1[i-1]==s2[j-1] and i!=j)
                    {
                        dp[i][j]=dp[i-1][j-1]+1;
                    }
                    else
                    {
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
            return dp[x][y];
		}
