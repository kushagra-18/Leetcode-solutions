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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector <int> arr;
        
         for(int i=0; i<lists.size(); i++){
           while(lists[i] != NULL){
               arr.push_back(lists[i]->val);
               lists[i]=lists[i]->next;
           }
        }
        
        sort(arr.begin(),arr.end());
        
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
    
        
        for(auto x:arr){
            
            ListNode* list = new ListNode(x);
            
            temp->next = list;
            temp = temp->next;
        }
        
        return dummy->next;
    }
};