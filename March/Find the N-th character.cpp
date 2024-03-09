class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
       
        while (r--) {
        string ans = "";
        for (int i = 0; i <= n; i++) {
            if (s[i] == '1') {
                ans.push_back('1');
                ans.push_back('0');
            } else {
                ans.push_back('0');
                ans.push_back('1');
            }
        }
        s = ans;
    }
    return s[n];
    }
};
