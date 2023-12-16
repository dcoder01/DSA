class Solution {
public:
    int findH(TreeNode * node){
        if(node==nullptr) return 0;
        int lh=findH(node->left);
        int rh=findH(node->right);
        return 1+max(lh,rh);
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        int lh=findH(root->left);
        int rh=findH(root->right);
        if(abs(lh-rh)>1) return false;
        bool left=isBalanced(root->left);
        bool right= isBalanced(root->right);
        if(!left ||!right) return false;


         return true;
    }
};
