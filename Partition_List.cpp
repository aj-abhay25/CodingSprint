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
    ListNode *partition(ListNode *head, int x) {
        ListNode dummy_smaller{0};
        ListNode dummy_larger{0};
        auto smaller = &dummy_smaller;
        auto larger = &dummy_larger;

        while (head) {
            if (head->val < x) {
                smaller->next = head;
                smaller = smaller->next;
            } else {
                larger->next = head;
                larger = larger->next;
            }
            head = head->next;
        }
        smaller->next = dummy_larger.next;
        larger->next = nullptr;

        return dummy_smaller.next;
    }
};