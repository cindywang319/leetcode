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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* curr = result;
        int carry = 0;
        while(l1 || l2 || carry) {
            int x = (l1 != NULL) ? l1->val : 0;
            int y = (l2 != NULL) ? l2->val : 0;
            int sum = x + y + carry;
            curr->next = new ListNode(sum % 10);
            carry = (sum) / 10;
            curr = curr->next;
            // l1 = l1->next;
            // l2 = l2->next;
            l1 = (l1 != NULL) ? l1->next : l1;
            l2 = (l2 != NULL) ? l2->next : l2;
        }
        return result->next;
    }
};