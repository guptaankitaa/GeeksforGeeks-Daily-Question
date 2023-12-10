class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
   bool subArrayExists(int arr[], int n)
    {
        map<int,int>mp;
        int prefix_sum = 0;
        
        for(int i = 0; i < n; i++){
            prefix_sum += arr[i];
            
            if(prefix_sum == 0 || mp.find(prefix_sum) != mp.end()){
                return true;
            }
            mp[prefix_sum]++;
        }
        return false;
    }
};
