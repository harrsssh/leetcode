Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

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
        vector<vector<int>> ans;
        if(root == NULL){
            return {};
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        int j=0;
        int k = 0;
        while(q.empty() == false){
            int count = q.size();
            vector<int> res;
            for(int i=0; i<count; i++){
                TreeNode* curr = q.front();
                q.pop();
                
                res.push_back(curr->val);
                
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
            ans.push_back(res);
            j++;
        }
        return ans;
    }
};
