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
    ListNode *detectCycle(ListNode *head) {
        
        if(head == nullptr)
            return nullptr;
        
        bool isCycle = false;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=nullptr && fast->next!=nullptr){
            
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                
                isCycle = true;
                break;
            }   
        }
        
        if(!isCycle)
            return nullptr;
        
        slow = head;
        
        while(slow!=fast){
            
            slow = slow->next;
            fast = fast->next;
            
        }
        
        return slow;
        
    }
};