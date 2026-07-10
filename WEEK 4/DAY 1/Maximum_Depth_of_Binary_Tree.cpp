class Solution {
public:
    int height(TreeNode*root){
        if(root==NULL) return 0;
        int leftHt=height(root->left);
        int rightHt=height(root->right);
        return 1+max(leftHt,rightHt);

    }
    int maxDepth(TreeNode* root){
        return height(root);
        
    }
};
