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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        while(curr!=NULL && curr->val==val) {
            curr = curr->next;
        }
        // curr holds a value which is different from val
        head = curr;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->next->val!=val){
                curr=curr->next;
            }else{
                //next is having val
                if(curr->next->next!=NULL)
                    curr->next =curr->next->next;
                else  curr->next= NULL;
            }
        }
        return head;
    }
};