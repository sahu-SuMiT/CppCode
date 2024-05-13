class Solution{ 
public:
    vector<int>preorder(TreeNode *root){
       vector<int>ans;
       if(root == NULL){
           return ans;}
       stack<TreeNode*>s;
       s.push(root);
       while(!s.empty()){
           TreeNode *node = s.top(); s.pop();
           ans.push_back(node->val);
           if(node->right !=NULL){
               s.push(node->right);}
           if(node->left != NULL){
               s.push(node->left);}}
       return ans;}
    vector<int>inorder(TreeNode *root){
        vector<int>ans;
        if(root==NULL){
            return ans;}
        stack<TreeNode*>s;
        TreeNode *temp = root;
        while(temp != NULL || !s.empty()){
            while(temp != NULL){
                s.push(temp);
                temp = temp->left;}
            temp = s.top();
            s.pop();
            ans.push_back(temp->val);
            std::cout << temp->val << " ";
            temp = temp->right;}
        return ans;}};
    vector<int>postOrder(TreeNode* root){
        if(root == nullptr){
            return {};
        }
        stack<TreeNode*>st1, st2;
        st1.push(root);
        while(!st1.empty()){
            root = st1.top(); st1.pop();
            st2.push(root);
            if(root->left){
                st1.push(root->left);
            }
            if(root->right){
                st1.push(root->right);
            }
        }
        vector<int>ans;
        while(!st2.empty()){
            ans.push_back(st2.top()->key); st2.pop();
        }
        return ans;
    }
    vector<vector<int>>preInPost(TreeNode* root){
        if(!root){
            return {};
        }
        vector<int> pre, in, post;
        stack<pair<TreeNode*,int>>st;
        st.push({root,1});
        while(!st.empty()){
            auto it = st.top(); 
            st.pop();
            if(it.second == 1){
                pre.push_back(it.first->key);
                it.second = 2;
                st.push(it);
                if(it.first->left){
                    st.push({it.first->left, 1});
                }
            }
            else if(it.second == 2){
                in.push_back(it.first->key);
                it.second = 3;
                st.push(it);
                if(it.first->right){
                    st.push({it.first->right, 1});
                }
            }
            else{
                post.push_back(it.first->key);
            }
        }
        vector<vector<int>>ans;
        ans.push_back(pre);
        ans.push_back(in);
        ans.push_back(post);
        return ans;
}
