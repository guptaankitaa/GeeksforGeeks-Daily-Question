
class Solution
{
    public:
        int maxSum(int n)
        {
            if(n<12)
                return n;
            return maxSum(n/2) + maxSum(n/3) + maxSum(n/4);
        }
};
