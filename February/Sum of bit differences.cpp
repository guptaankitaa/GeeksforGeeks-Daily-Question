long long res = 0;
        for(int i=0; i<32; i++)
        {
            long long cnt = 0;
            int k = 1<<i;
            for(int j=0; j<n; j++)
            {
                if((arr[j] & k) == 0)
                cnt++;
            }
            res += cnt * (n-cnt) * 2;
        }
        return res;
