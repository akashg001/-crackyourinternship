class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    int diff,ans=INT_MAX;
    for(int i=0;i<=n-m;i++){
        diff=a[i+(m-1)]-a[i];
        ans=min(ans,diff);
    }
    return ans;
    }   
};