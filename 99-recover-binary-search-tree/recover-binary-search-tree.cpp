class Solution {
public:

    TreeNode *first=NULL, *prev =NULL, *second =NULL;

    void inorder(TreeNode* root) {
        if(root==NULL)
        return ;
        inorder(root->left);
        if(prev!=NULL&&prev->val>root->val){
            if(first==NULL)
                first=prev;
            second=root;
        }

        prev=root;
        inorder(root->right);

    }

    void recoverTree(TreeNode* root){
        inorder(root);
        swap(first->val,second->val);
    }
};