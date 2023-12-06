struct ListNode* rotateRight(struct ListNode* head, int k) {
    int len = 0;
    struct ListNode *cur = head;
    struct ListNode *tail;
    while (cur) {
        len ++;
        tail = cur;
        cur = cur->next;
    }
    if (len == 0) {
        return head;
    }
    k %= len;
    cur = head;
    while (k ++ < len - 1) {
        cur = cur->next;
    }
    tail->next = head;
    struct ListNode *ret = cur->next;
    cur->next = NULL;
    return ret;
}
