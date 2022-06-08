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
    void reorderList(ListNode* head) {
        
        if(!head || !head->next)
            return;
        
        stack<ListNode*> st;
        
        ListNode* curr = head;
        int len = 0;
        
        while(curr){
            
            st.push(curr);
            curr = curr->next;
            len++;
        }
        
        curr = head;
        
        // cout<<len;
        
        for(int i = 0;i<len/2;i++){
            
            ListNode* node = st.top();
            st.pop();
            
            node->next = curr->next;
            curr->next = node;
            curr = curr->next->next;
            
        }
            
       curr->next = nullptr;
    }
};