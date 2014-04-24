/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> ret;
        stack<TreeNode*> stk;
        if(root == NULL) return ret;
        
        TreeNode *pre = NULL;
        TreeNode *cur = root;
        
        while(cur || !stk.empty()) {
            while(cur) {
                stk.push(cur);
                cur = cur->left;
            }
            
            cur = stk.top();
            if(cur->right == NULL || cur->right == pre) {
                stk.pop();
                ret.push_back(cur->val);
                pre = cur;
                cur = NULL;
            }
            else {
                cur = cur->right;
            }
        }
        
        return ret;
    }
};
