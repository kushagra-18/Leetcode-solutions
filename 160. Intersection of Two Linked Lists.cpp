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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == nullptr || headB == nullptr)
            return nullptr;
        
        ListNode *jump1 = headA, *jump2 = headB;
        
        if(jump1 == jump2){
            
            return jump1;
        }
        
        while(1){
            
            jump1 = jump1->next;
            jump2 = jump2->next;
            
            
            if(jump1==nullptr){
                
                jump1 = headB;
                
            }else if(jump2 == nullptr){
                
                jump2= headA;
            }
            
            
            if(jump1==jump2){
                
                break;
            }
            
            if(jump1==nullptr || jump2 == nullptr){
                
                return nullptr;
            }
            
        }
        
       
  
        return jump1;
    }
};