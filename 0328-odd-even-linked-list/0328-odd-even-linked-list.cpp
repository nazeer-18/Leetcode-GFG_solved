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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = head;
        if(odd == NULL || odd->next==NULL)
            return odd;
        ListNode* oddStart = odd;
        ListNode* even =odd->next;
        ListNode* evenStart = even;
        while(odd->next!=NULL && even->next!=NULL){
            odd->next = even->next;
            odd=odd->next;
            even->next = odd->next;
            even = even->next;
        }
        if(even!=NULL)
        even->next=NULL;
        odd->next = evenStart;
        return oddStart;
    }
};