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
    int sum = 0;
    void traverse(TreeNode* root, bool flag) {
        if(root==NULL) return ;
        if(root->left==NULL && root->right==NULL && flag) sum+=root->val;
        if(root->left){
            traverse(root->left,true);
        }if(root->right) {
            traverse(root->right,false);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        bool flag = false;
        traverse(root,flag);
        return sum;
    }
};