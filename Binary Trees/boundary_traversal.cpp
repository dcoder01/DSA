bool isLeaf(TreeNode<int> * root){
    if(!root->left && !root->right) return true;
    return false;
}
void addleft(TreeNode<int> * root,vector<int>&ans){
    TreeNode<int> * node=root->left;
    while(node){
        if(!isLeaf(node))ans.push_back(node->data);
        if(node->left) node=node->left;
        else node=node->right;

    }

}
void addright(TreeNode<int> * root,vector<int>&ans){
    TreeNode<int> * node=root->right;
    stack<int>st;
    while(node){
        if(!isLeaf(node))st.push(node->data);
        if(node->right) node=node->right;
        else node=node->left;
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
}
void addleaf(TreeNode<int> * root,vector<int>&ans){
    if(isLeaf(root)){
        ans.push_back(root->data);
        return ;
    }
    if(root->left) addleaf(root->left,ans);
    if(root->right) addleaf(root->right,ans);

}
vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    vector<int>ans;
    if(root==nullptr) return ans;
    if(!isLeaf(root)) ans.push_back(root->data);
    addleft(root,ans);
    addleaf(root,ans);
    addright(root,ans);
    return ans;



}
