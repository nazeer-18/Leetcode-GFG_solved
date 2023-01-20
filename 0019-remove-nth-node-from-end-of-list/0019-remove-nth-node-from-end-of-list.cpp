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
    int getLength(ListNode* head) {
        int i = 1;
        while(head->next!=NULL) {
            i++;
            head=head->next;
        }
        return i;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp = head;
        int len = getLength(head);
        if(len==n) return head->next;
        for(int i = 1; i < len-n; i++) {
            temp=temp->next;
        }
        if(temp->next==NULL) return NULL; 
        temp->next = temp->next->next;
        return head;
    }
};