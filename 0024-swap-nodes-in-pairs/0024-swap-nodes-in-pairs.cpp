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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode *newHead;
                     ListNode* temp = head;
        if(temp==NULL || temp->next==NULL){
            return temp;
        }
        newHead = swapPairs(temp->next->next);
        ListNode* ans = temp->next;
        temp->next->next = temp;
        temp->next=newHead;
        return ans;
    }
};