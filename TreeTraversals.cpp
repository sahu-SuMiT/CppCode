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
