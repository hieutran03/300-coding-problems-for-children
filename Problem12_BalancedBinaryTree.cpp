//link: https://leetcode.com/problems/balanced-binary-tree/
class Solution {
public:
    int height(TreeNode* root){
        if(!root)
            return 0;
        int a = height(root->left);
        int b = height(root->right);
        
        return max(a,b)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(!root)
            return 1;
        if(abs(height(root->left)-height(root->right)) > 1)
            return 0;
        int a = isBalanced(root->left);
        int b = isBalanced(root->right);
        return a&&b;
    }
};
