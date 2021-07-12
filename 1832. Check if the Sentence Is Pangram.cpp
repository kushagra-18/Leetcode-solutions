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
    ListNode* swapPairs(ListNode* head) {
        
        if(head ==nullptr){
            
            return head;
        }
        
        ListNode *curr = head;
        
        while(curr!=nullptr && curr->next!=nullptr){
            
            swap(curr->val,curr->next->val);
            
            curr = curr->next->next;
            
        }
        
        return head;
        
    }
};