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
    vector<int> ans;
    stack<TreeNode*> que;
    vector<int> inorderTraversal(TreeNode *root) {
        
        if (root == NULL) {
            return ans;
        }
        
        que.push(root);
        
        while(!que.empty()) {
            while (root->left != NULL) {
                root = root->left;
                que.push(root);
            }
            
            while (!que.empty()) {
                root = que.top();
                que.pop();
                ans.push_back(root->val);
                if(root->right != NULL) {
                    root = root->right;
                    que.push(root);
                    break;
                }
            }
        }
        
        return ans;
    }

};
