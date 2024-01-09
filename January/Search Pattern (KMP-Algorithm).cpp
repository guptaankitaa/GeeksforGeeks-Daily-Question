class Solution
{
    public:
       vector<int> search(string pat, string txt)
{
       vector<int>v;
                for(int i=0; i<txt.size(); i++){
                    int c=i;
                    int j=0;
                    while(j<pat.size()){
                        if(txt[i]==pat[j]){
                            i++;
                        }
                        else{
                            i=c;
                            break;
                        }
                        j++;
                    }
                    if(j==pat.size()) v.push_back(c+1); i=c;
                }
                return (v.empty() ? vector<int>{-1} : v);
}
     
};
