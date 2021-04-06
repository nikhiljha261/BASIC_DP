int maxSumIS(int a[], int n)  
	{  
	    // Your code goes here
	    int ans[n];
	    for(int i=0;i<n;i++)
	    {
	        ans[i]=a[i];
	    }
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(a[j]<a[i] and ans[j]+a[i]>ans[i])
	            {
	                ans[i]=ans[j]+a[i];
	            }
	        }
	    }
	    int anss=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        anss=max(anss,ans[i]);
	    }
	    return anss;
	   // for lis ans[i]=1 and ans[j]+1>ans[i] then ans[i]=ans[j]+1.....
	}  
