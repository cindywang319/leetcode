/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *ret = NULL;
        ListNode **cur = &ret;
        ListNode *res = NULL;
        while(head != NULL && head->next != NULL) {
            res = head->next->next;
            *cur = head->next;
            cur = &((*cur)->next);
            *cur = head;
            cur = &((*cur)->next);
            head = res;
        }
        *cur = head;
        return ret;
    }
};
