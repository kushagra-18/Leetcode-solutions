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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);
        
        ListNode* sHead = small;
        ListNode* lHead = large;
        
        
        ListNode* curr = head;
        
        while(curr!=nullptr){

        if(curr->val < x){
            
            sHead->next = curr;
            sHead = sHead->next;
            
        }else{
            
            lHead->next = curr;
            lHead = lHead->next;
        }
            curr = curr->next;
        
        }
        
        lHead->next = nullptr;
        
        sHead->next = large->next;
        
        return small->next;
        
    }
};