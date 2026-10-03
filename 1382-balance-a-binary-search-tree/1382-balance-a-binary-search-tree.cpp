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
    void inorder(TreeNode* root, vector<TreeNode*>& v) {
        if (!root) return;
        inorder(root->left, v);
        v.push_back(root);
        inorder(root->right, v);
    }

    TreeNode* build(vector<TreeNode*>& v, int l, int r) {
        if (l > r) return NULL;

        int mid = (l + r) / 2;
        TreeNode* root = v[mid];

        root->left = build(v, l, mid - 1);
        root->right = build(v, mid + 1, r);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> v;
        inorder(root, v);
        return build(v, 0, v.size() - 1);
    }
};