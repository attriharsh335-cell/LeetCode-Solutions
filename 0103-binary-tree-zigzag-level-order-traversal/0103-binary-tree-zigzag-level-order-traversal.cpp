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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==nullptr){
            return result;
        }
        queue<TreeNode*> qn;
        qn.push(root);
        bool leftToright=true;
        while(!qn.empty()){
            int size=qn.size();
            vector<int> row(size);
            for(int i=0;i<size;i++){
                TreeNode* node=qn.front();
                qn.pop();
                int index = (leftToright) ? i : (size-1-i);
                row[index]=node->val;
                if(node->left){
                    qn.push(node->left);
                }
                if(node->right){
                    qn.push(node->right);
                }
            }
            leftToright = !leftToright;
            result.push_back(row);
        }
        return result;
    }
};