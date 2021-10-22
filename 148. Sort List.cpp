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
class Solution {
public:

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
       if(l1==nullptr){
           
           return l2;
       }
        
        if(l2==nullptr){
            
            return l1;
        }
 
        if(l1->val < l2->val){
            
            l1->next = mergeTwoLists(l1->next,l2);
            return l1;
            
        }else{
    
            l2->next = mergeTwoLists(l1,l2->next);
            return l2;
        }
    }
    
    ListNode* sortList(ListNode* head) {
       
        if(head == NULL or head->next == NULL){
            
            return head;
        }
  
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp;
        
        while(fast!=nullptr && fast->next!=nullptr){
            
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
            
        }
        
        temp->next = nullptr;
        
        ListNode* left = head;
        ListNode* right = slow;
        
        return mergeTwoLists(sortList(left),sortList(right));
        
    }
};
};