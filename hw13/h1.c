int getSize(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + getSize(root->left) + getSize(root->right);
}

int *travel(struct TreeNode *root, int *ret) {
    if (root == NULL) {
        return ret;
    }
    ret = travel(root->left, ret);
    *ret++ = root->val;
    return travel(root->right, ret);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int size = getSize(root);
    int *ret = (int *)malloc(size * sizeof(int));
    travel(root, ret);
    (*returnSize) = size;
    return ret;
}
