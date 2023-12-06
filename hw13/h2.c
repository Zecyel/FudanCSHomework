void del(struct ListNode *cur, struct ListNode* prev, int val) {
    if (cur == NULL) {
        if (prev != NULL) {
            prev->next = NULL;
        }
        return;
    }
    if (cur->val != val) {
        if (prev != NULL) {
            prev->next = cur;
        }
        del(cur->next, cur, cur->val);
    } else {
        del(cur->next, prev, val);
    }
}

struct ListNode* deleteDuplicates(struct ListNode* head) {
    del(head, NULL, -101);
    return head;
}
