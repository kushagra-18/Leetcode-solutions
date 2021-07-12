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
        
        
        
        
        ListNode *slow = head, *fast = head;
        
        bool cycle = false;
        
        while(fast!=nullptr && fast->next!=nullptr){
            
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow==fast){
                
            cycle = true;
              break;
            }
        
        }
        
        if(cycle){
        
        ListNode *slow2 = head;
        
        while(slow!=slow2){
            
            slow = slow->next;
            slow2 = slow2->next;
            
        }
        
        return slow;
        }
        
        return nullptr;
        
    }
};