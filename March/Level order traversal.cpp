void levelOrderQueue(Node* root, vector<int>&ans){
         if(root==NULL) return;
         queue<Node*>q;
         q.push(root);
         while(q.size()>0){
             Node* temp=q.front();
             q.pop();
             ans.push_back(temp->data);
             if(temp->left) q.push(temp->left);
             if(temp->right) q.push(temp->right);
         }
         return;
     }
     
     
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
      levelOrderQueue(root, ans);
      return ans;
    }
