class Solution
{
    public:
        /*You are required to complete below method */
       void fun(Node* root,int &ans)
        {
            if(root == NULL)
            {
                return;
                
            }
            else if(root->left == NULL and root->right == NULL)
            {
                ans += root->data;
                return;
            }
            else
            {
                fun(root->left,ans);
                fun(root->right,ans);
            }
            
        }
        int sumOfLeafNodes(Node *root ){
             
             
            int ans = 0;
            fun(root,ans);
            return ans;
             
        }
};
