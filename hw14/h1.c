struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *mid = head, *now = head;
    while (now) {
        now = now->next;
        if (!now) {
            break;
        }
        mid = mid->next;
        now = now->next;
    }
    return mid;
}
