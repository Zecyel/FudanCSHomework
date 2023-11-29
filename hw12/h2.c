bool sym(struct TreeNode* r1, struct TreeNode *r2) {
    if (r1 == NULL && r2 == NULL) {
        return true;
    }
    if (r1 != NULL && r2 != NULL) {
        return r1->val == r2->val && sym(r1->left, r2->right) && sym(r1->right, r2->left);
    }
    return false;
}

bool isSymmetric(struct TreeNode* root) {
    return sym(root, root);
}
