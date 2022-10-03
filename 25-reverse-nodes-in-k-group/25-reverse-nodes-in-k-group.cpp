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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == nullptr || len(head) < k){
            return head;
        }
        
        ListNode *curr = head;
        ListNode *prev = nullptr;
        ListNode *temp;
        
        int count = 0;
        
        while(count<k && curr!=nullptr){
            
            temp = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = temp;
                    
            count++;
        }
        
        
        if(temp!=nullptr){
            
            head->next = reverseKGroup(temp,k);
            
        }
        
        return prev;
    }
   
public:
    int len(ListNode* head)
    {
        ListNode* current = head;
        int len = 0;
        while(current != NULL)
        {
            current = current -> next;
            len++;
        }
        return len;
    }
};