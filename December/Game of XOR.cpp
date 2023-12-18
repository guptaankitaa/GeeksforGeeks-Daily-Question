class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        // code here
        if(N%2==0){
            return 0;
        }
        int ans=0;
        for(int i=0;i<N;i=i+2){
            ans^=A[i];
        }
        return ans;
    }
};
