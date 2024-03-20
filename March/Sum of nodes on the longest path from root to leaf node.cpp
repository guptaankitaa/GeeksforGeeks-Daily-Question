class Solution
{
public:
    
    int x = INT_MIN, mxLvl{};
int sumOfLongRootToLeafPath(Node *r, int lvl=1, int s=0) {
        if(!r) return 0;
        
        s += r->data;
        
        if(lvl > mxLvl) x = s, mxLvl = lvl;
        else if(lvl == mxLvl) x = max(x, s);
        
        sumOfLongRootToLeafPath(r->left, lvl + 1, s),
        sumOfLongRootToLeafPath(r->right, lvl + 1, s);
        
        return x;
}
};
