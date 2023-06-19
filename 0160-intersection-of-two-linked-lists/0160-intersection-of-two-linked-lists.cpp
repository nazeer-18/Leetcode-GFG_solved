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
        int l1=0,l2=0;
        ListNode * temp = headA, *temp2;
        while(temp) {
            l1++;
            temp = temp->next;
        }
        temp = headB;
        while(temp) {
            l2++;
            temp = temp -> next;
        }
        if(l1<l2) {
            l1 = l2-l1;
            temp2 = headA;
            temp = headB;
            while(l1--){
                temp = temp -> next;
            }
        }
        else {
          l1 = l1-l2;  
            temp2 = headB;
            temp = headA;
            while(l1--){
                temp = temp -> next;
            }
        } 
        while(temp!=temp2){
            temp = temp -> next;
            temp2 = temp2 -> next;
        }
        return temp;
    }
};