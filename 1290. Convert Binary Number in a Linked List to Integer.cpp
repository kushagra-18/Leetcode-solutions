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
    int getDecimalValue(ListNode* head) {
       
        int count = -1,tot = 0,temp;
        
        ListNode *curr = head;
        
        while(curr!=nullptr){
            
            count++;
            curr = curr->next;
        }
        
       ListNode *currNew = head;
        
        
       while(currNew!=nullptr){
            
            temp = currNew->val;
                            
            tot = tot + temp*pow(2,count);
            
            currNew = currNew->next;
            
            count--;
            
        }
        
        
return tot;        
    }
};