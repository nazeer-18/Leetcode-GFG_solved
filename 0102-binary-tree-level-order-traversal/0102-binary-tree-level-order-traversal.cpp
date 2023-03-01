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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<TreeNode*> v;
        vector<int> val;
        vector<vector<int>> ans;
        if(root!=NULL) v.push_back(root);
        else return ans;
        v.push_back(NULL);
        while(v.size()){
            TreeNode* temp = v[0];
            v.erase(v.begin());
            if(temp!=NULL){
                val.push_back(temp->val);
                if(temp->left!=NULL) v.push_back(temp->left);
                if(temp->right!=NULL) v.push_back(temp->right);
            }else{
                ans.push_back(val);
                val.clear();
                if(v.size()!=0){
                    v.push_back(NULL);
                }
            }
        }
        return ans;
    }
};