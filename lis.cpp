int longestSubsequence(int n, int a[])
{
    vector<int> v;
    v.push_back(a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]>v.back())
        {
            v.push_back(a[i]);
            continue;
        }
        int ind=lower_bound(v.begin(),v.end(),a[i])-v.begin();
        
        v[ind]=a[i];
        
    }
    return v.size();
}
