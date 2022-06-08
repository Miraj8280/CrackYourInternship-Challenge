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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        /*
        // corner case
        if(!list1) return list2;
        if(!list2) return list1;
        
        // take two pointers - head (head of the merged new list)
                          //  tail (tail of the merged new list)
        ListNode* head = NULL, *tail = NULL;
        
        // move the pointers to the smallest head among the lists.
        if(list1 -> val < list2 -> val){
            head = tail = list1;
            list1 = list1 -> next;
        }
        else{
            head = tail = list2;
            list2 = list2 -> next;
        }
         
        
        while(list1 && list2){
            
            if(list1 -> val < list2 -> val){
                tail -> next = list1;
                tail = tail -> next;
                list1 = list1 -> next;
            }
            else{
                tail -> next = list2;
                tail = tail -> next;
                list2 = list2 -> next;
            }
        }
        
        // link the remaining nodes by the tails
        if(list1){
            tail -> next = list1;
            list1 = list1 -> next;
        }
        if(list2){
            tail -> next = list2;
            list2 = list2 -> next;
        }
        return head;
        */
        
        // Recursive approach
        
        // base case
        if(!list1) return list2;
        if(!list2) return list1;
        
        // which head is smaller, call the recursive fun and move forward
        // return samllest head.
        if(list1 -> val < list2 -> val){
            list1 -> next = mergeTwoLists(list1 -> next, list2);
            return list1;
        }
        else{
            list2 -> next = mergeTwoLists(list1, list2 -> next);
            return list2;
        }
        
        
        
    }
};
