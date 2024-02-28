class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int n = s.size();
        int ans = -1;
        
        if(n<=3)
        {
            if(stoi(s)%8==0)
                ans = 1;
        }
        else
        {
            if(stoi(s.substr(n-3))%8 == 0)
                ans = 1;
        }
        return ans;
    }
};
