/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
*/
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
    int count(ListNode * head){
        int ans=0;
        while(head!=NULL){
            ans++;
            head=head->next;
        }
        return ans;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL){
            return NULL;
        }
        ListNode*temp=head;
        ListNode*temp1=head;
        int t=count(head)-n;
        if(t==0){
            return head->next;
        }
        while(t>0){
            // if(temp->next==NULL){
            //     break;
            // }
            if(t>1)
            temp=temp->next;

            temp1=temp1->next;
            t--;
        }
        temp->next=temp1->next;
        delete temp1;
        return head;
    }
};
