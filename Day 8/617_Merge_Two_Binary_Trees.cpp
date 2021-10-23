#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    
    TreeNode* merge(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) {
            return NULL;
        }
        
        else if (root1 && !root2) {
            return root1;
        }
        
        else if (!root1 && root2) {
            return root2;
        }
        
        TreeNode* node = new TreeNode();
        node->val = root1->val + root2->val;
        
        node->left = merge(root1->left, root2->left);
        node->right = merge(root1->right, root2->right);
        
        return node;
    }
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return merge(root1, root2);
    }
};