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
    
ListNode* getLast(ListNode* b) {
    auto curr = b;

    while (curr->next != nullptr) {
        curr = curr->next;
    }

    return curr;
}

ListNode* getHigh(ListNode* a,int hi) {
    
    auto curr = a;

    int cnt = -1;

    while (cnt!=hi) {
        
        curr = curr->next;
        cnt++;
    }

    return curr;
}
    
    ListNode* mergeInBetween(ListNode* a, int lo, int hi, ListNode* b) {
       
     if(a==nullptr)
        return b;

    if(lo == 0 && hi == 0)
        return b;

   
    int count = 0;

    auto curr = a;

    auto joiner = getHigh(a,hi);
    auto last = getLast(b);

    //if lo = 0

    if(lo == 0){

      curr = nullptr;
      curr->next = b;

    }else
    while (curr != nullptr) {
        if (++count == lo) {
            curr->next = b;
            break;
        }

        curr = curr->next;
    }

    last->next = joiner;


    return a;
}
};