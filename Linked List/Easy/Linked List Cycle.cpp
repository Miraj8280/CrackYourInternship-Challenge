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
    bool hasCycle(ListNode *head) {
        
        // using Hash Table
        /*
        ListNode* curr = head;
        unordered_set<ListNode*> s;
        
        while(curr){
            if(s.find(curr) != s.end()) return true;
            s.insert(curr);
            curr = curr -> next;
        }
        return false;
        
        */
        // TC : O(n)
        // SC : O(n)
        
        
        // using FCD algo
        ListNode* fast = head, *slow = head;
        while(fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast) return true;
        }
        return false;
        
        // TC : O(n)
        // SC : O(1)
    }
};
