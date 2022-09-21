// 107. Binary Tree Level Order Traversal II:
// Given the root of a binary tree, return the bottom-up level order traversal of its nodes' values. (i.e., from left to right, level by level from leaf to root).
  
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> res = {};
        if(root == NULL){
            return ans;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty() == false){
            int count = q.size();
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
            res.clear();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
