bool hasSum(struct TreeNode* root, int targetSum) {
    targetSum -= root->val;
    return root->left && hasSum(root->left, targetSum)
        || root->right && hasSum(root->right, targetSum)
        || !root->left && !root->right && targetSum == 0;
}

bool hasPathSum(struct TreeNode* root, int targetSum) {
    return root && hasSum(root, targetSum);
}
