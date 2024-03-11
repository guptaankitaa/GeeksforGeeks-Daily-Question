
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
    {
        int r1=0, c1=0, r2=n-1, c2=n-1,count=0 ;
        
        while(r1<n && r2>-1){
            int sum = mat1[r1][c1] + mat2[r2][c2];
            
            if(sum == x){
                count++;
                c1++;
                c2--;
            }
            else if(sum < x){
                c1++;
            }
            else if(sum > x){
                c2--;
            }
            
            if(c1 > n-1){
                r1++;
                c1=0;
            }
            if(c2 < 0){
                r2--;
                c2 = n-1;
            }
        }
        return count;
    }
