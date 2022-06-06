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
        
        ListNode *dummyOne = headA;
        ListNode *dummyTwo = headB;
        
        while(dummyOne!=dummyTwo){
            
            dummyOne = (dummyOne == nullptr)? headB : dummyOne->next;
            dummyTwo = (dummyTwo == nullptr)? headA :  dummyTwo->next;
            
        }
        
        return dummyTwo;
    }
};