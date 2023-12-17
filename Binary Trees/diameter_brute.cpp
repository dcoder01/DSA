/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findH(TreeNode * root){
        if(root == NULL) return 0; 
        int lh = findH(root->left); 
        int rh = findH(root->right); 
        return 1+ max(lh, rh); 
    }
    
public:
    int maxi=0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
        int left=findH(root->left);
        int right= findH(root->right);
        int sum=left+right;
        maxi=max(sum,maxi);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxi;


        
        
    }
};
