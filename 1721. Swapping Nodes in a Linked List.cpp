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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *temp = head;

        int count = 0;
        
        while(temp!=nullptr){
            
            temp = temp->next;
            count++;
            
        }
              
        int i = 1;
        
        ListNode *first = head;
        ListNode *sec = head;
        
        while(i<k){
            
            first = first->next;
            i++;
        }
        cout<<i;
        int j = 1;
        
        while(j<=(count - k)){
            
            sec = sec->next;
                j++;
            
        }

        cout<<j;
        swap(sec->val,first->val);
        
        return head;
    }
};