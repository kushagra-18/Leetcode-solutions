
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr)
            return nullptr;
        
        //find middle   
        ListNode* prev;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=nullptr && fast->next!=nullptr){
            
            prev = slow;
            
            slow = slow->next;
            fast = fast->next->next;
               
        }
        
        prev->next = slow->next;
        
        delete(slow);

        
        return head;
        
    }
};