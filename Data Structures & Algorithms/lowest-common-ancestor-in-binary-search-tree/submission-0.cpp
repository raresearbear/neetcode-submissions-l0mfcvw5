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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pAncestry = ancestryPath(root, p);
        vector<TreeNode*> qAncestry = ancestryPath(root, q);
        
        TreeNode* lca = root;
        int minLen = min(pAncestry.size(), qAncestry.size());
        for (int i = 0; i < minLen; i++) {
            if (pAncestry[i] == qAncestry[i])
                lca = pAncestry[i];
            else
                break;
        }
        return lca;
    }

    vector<TreeNode*> ancestryPath(TreeNode* root, TreeNode* x) {
        vector<TreeNode*> ancestry = {root};
        while (root != x) {
            if (root->val >= x->val)
                root = root->left;
            else
                root = root->right;
            ancestry.push_back(root);
        }
        return ancestry;
    }
};
