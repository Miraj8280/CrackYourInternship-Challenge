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
    ListNode* middleNode(ListNode* head) {
       
        /*
        vector<ListNode*> v = {head};
        while(head){
            v.push_back(head);
            head = head -> next;
        }
        int n = v.size();
        if(n % 2) return v[n/2 + 1];
        else return v[n/2];
        */
         // TC : O(n)
        // SC : O(n)
        
        
        ListNode* slow = head, * fast = head;
        while(fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
        
          // TC : O(n)
        // SC : O(1)
    }
};
