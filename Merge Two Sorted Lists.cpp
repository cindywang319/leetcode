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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *ret = NULL;
        ListNode **head = &ret;
        while(l1 != NULL && l2 != NULL) {
            if(l1->val < l2->val) {
                *head = l1;
                l1 = l1->next;
            } else {
                *head = l2;
                l2 = l2->next;
            }
            head = &((*head)->next);
        }
        while(l1 != NULL) {
            *head = l1;
            head = &((*head)->next);
            l1 = l1->next;
        }
        while(l2 != NULL) {
            *head = l2;
            head = &((*head)->next);
            l2 = l2->next;
        }
        
        return ret;
    }
};
