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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        } 
        ListNode* prev = head;    
        ListNode* p = head->next;
 
        while(p != nullptr){
            if(p->val == prev->val){
                prev->next = p->next;
                delete p;
                p = prev->next;
            }
            else{
                prev = p;
                p = p->next; 
            }
        }
        return head;
    }
};