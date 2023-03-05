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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> ans;
        if(root==NULL) return -1;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        long long sum = 0;
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp) {
                sum+=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            } else{
                ans.push_back(sum);
                if(!q.empty()) {
                    sum = 0;
                    q.push(NULL);
                }
            }
        }
        if(ans.size()<k) return -1;
        sort(ans.begin(),ans.end(),greater<long long>());
        return ans[k-1];
    }
};