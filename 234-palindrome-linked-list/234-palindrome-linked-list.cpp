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
    
    ListNode *reverse(ListNode* head){
        
        ListNode *prev = nullptr;
        ListNode *temp;
        ListNode *curr = head;
        
        while(curr!=nullptr){
            
            temp = curr->next;
            
            curr->next = prev;
            
            prev = curr;
            
            curr = temp;
            
        }
        
        
        return prev;
        
    }
    
    
public:
    bool isPalindrome(ListNode* head) {
  
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast!=nullptr && fast->next!=nullptr){
            
            slow = slow->next;
            fast = fast->next->next;
            
        }
        
        fast = head;
        
        slow = reverse(slow);
        
        bool flag = true;
        //now check the values;
        
        while(slow!=nullptr){
            
            if(slow->val != fast->val){
                
                flag = false;
                break;
                
            }else{
                
                slow = slow->next;
                fast = fast->next;
                
            }
            
        }
        
       return flag; 
    }
};