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
    int maxDepth(TreeNode* root) {
        if(root==0) return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
        // queue<TreeNode*> q;
        // int k = 0;
        // if(root==NULL) return 0;
        // q.push(root);
        // q.push(NULL);
        // while(!q.empty()) {
        //     TreeNode* temp = q.front();
        //     q.pop();
        //     if(temp!=NULL){
        //         if(temp->left!=NULL) {
        //             q.push(temp->left);
        //         if(temp->right!=NULL)
        //             q.push(temp->right);
        //         }
        //     }else if(!q.empty()) {
        //             ++k;
        //             q.push(NULL);
        //         }
        // }
        // return k+1;
    }
};