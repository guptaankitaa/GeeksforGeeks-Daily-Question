class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        vector<pair<int,int>> pa;
        for(int i=0; i<n; i++){
            pa.push_back({a[i],i});
        }
        sort(pa.begin(),pa.end());
        vector<int> suf(n,pa[n-1].second);
        int maxi=0;
        for(int i=n-2; i>=0; i--){
            int r=pa[i].second;
            suf[i]=max(suf[i+1],r);
            maxi=max(maxi,suf[i]-r);
        }
        return maxi;
    }
};
