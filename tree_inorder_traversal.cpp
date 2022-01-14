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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> node_list;
        inorder(root, node_list);
        return  node_list;
    }
private:
    void inorder(TreeNode* root, vector<int>& node_list) {

        if (root == NULL)
        {
            return;
        }

        inorder(root->left, node_list);
        node_list.push_back(root->val);
        inorder(root->right, node_list);
    }
};