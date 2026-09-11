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
    int result = 0;

    pair<int, int> dfs(TreeNode* node) {
        if (!node) return {0, 0};

        auto left = dfs(node->left);
        auto right = dfs(node->right);

        int totalSum = left.first + right.first + node->val;
        int totalCount = left.second + right.second + 1;

        if (node->val == totalSum / totalCount) {
            result++;
        }

        return {totalSum, totalCount};
    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return result;


        
    }
};