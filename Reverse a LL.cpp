/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // B
        if(head==nullptr || head->next==nullptr) {
            return head;
        }

        // H
        ListNode* nxt = head->next;
        ListNode* ll = reverseList(head->next);
        nxt->next = head;
        head->next = nullptr;

        return ll;

    }
};