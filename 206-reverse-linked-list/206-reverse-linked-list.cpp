class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
    if(head == nullptr){
        return head;
    }
        
        
        ListNode* temp;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        
        while(curr!=nullptr){
            
            temp = curr->next;
            
            curr->next = prev;
            
            prev = curr;
            
            curr = temp;
        }
        
        
        return prev;
        
    }
};