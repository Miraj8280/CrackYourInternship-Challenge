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
/*
private:
    int diameter = 0;
*/
    
public:
    int height(TreeNode* node){
        if(!node) return 0;
        return max(height(node -> left), height(node -> right)) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        
        int totalHeight = height(root -> left) + height(root -> right);
        
        int leftDiameter = diameterOfBinaryTree(root -> left);
        int rightDiameter = diameterOfBinaryTree(root -> right);
        
        int diameter = max(totalHeight, max(leftDiameter, rightDiameter));
        
        return diameter;
    }
};
