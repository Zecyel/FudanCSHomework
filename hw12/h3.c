#define max(i, j) ({ \
    const int _i = i; \
    const int _j = j; \
    (_i > _j) ? _i : _j; \
})

int maxDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}
