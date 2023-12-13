struct ListNode* removeNodes(struct ListNode* head) {
    struct ListNode *cur_head = head, *cur_tail = head;
    head = head->next;
    while (head) {
        if (head->val <= cur_tail->val) {
            cur_tail->next = head;
            cur_tail = head;
        } else if (cur_head->val < head->val) {
            cur_head = cur_tail = head;
        } else {
            cur_tail = cur_head;
            while (cur_tail->next->val >= head->val) {
                cur_tail = cur_tail->next;
            }
            cur_tail->next = head;
            cur_tail = head;
        }
        head = head->next;
    }
    return cur_head;
}
