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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA, *b = headB;
        
        // base case
        if(!headA || !headB) return NULL;
        
        while(a != b){
            // after first iteration, we reset the pointer to the head of another linked List
            a = (a != NULL) ? a -> next : headB;
            b = (b != NULL) ? b -> next : headA;
        }
        return a;
    }
};
