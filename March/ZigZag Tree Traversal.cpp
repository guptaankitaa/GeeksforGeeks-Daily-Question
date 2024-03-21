class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
       queue<Node*>q;
       vector<int>ans;
       
       if(!root){
           return ans;
       }
       bool flag = true;
       q.push(root);
       while(!q.empty()){
           int size = q.size();
           vector<int>level(size);
          
           for(int i = 0; i < size; i++){
               Node* ank = q.front();
               q.pop();
               
               int index = flag ? i : size - i -1;
               level[index] = ank->data;
               
               if(ank->left){
                   q.push(ank->left);
               }
                if(ank->right){
                   q.push(ank->right);
               }
               
           } flag = !flag;
           
           for(auto it : level){
               ans.push_back(it);
           }
       }
       return ans;
    }
};
