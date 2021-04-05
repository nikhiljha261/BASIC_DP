       int n=s.length();
       long long int dp[n+1][n+1];
       memset(dp,0,sizeof(dp));
       for(int i=0;i<n;i++)
       {
           dp[i][i]=1;
       }
       for(int l=2;l<=n;l++)
       {
           for(int i=0;i<n-l+1;i++)
           {
               int j=i+l-1;
               if(s[i]==s[j])
               {
                   dp[i][j]=(dp[i+1][j]+dp[i][j-1]+1)%1000000007;
               }
               else
               {
                   dp[i][j]=(dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1])%1000000007;
               }
           }
       }
       return dp[0][n-1];
