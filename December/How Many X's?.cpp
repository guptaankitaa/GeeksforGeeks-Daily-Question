class Solution {
  public:
   int countX(int L, int R, int X) {
        // code here
        int cnt=0;
        for(int i=L+1; i<R; i++){
            int number = i;
            while(number>=10){
                int lastDigit = number%10;
                if(lastDigit == X){
                    cnt++;
                }
                number = number/10;
            }
            if(number<10){
                if(number == X){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
