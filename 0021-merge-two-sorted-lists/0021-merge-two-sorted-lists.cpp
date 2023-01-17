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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * mergedList = new ListNode(-1);
        ListNode * temp = mergedList;
        while(list1!=NULL && list2!=NULL) {
            if(list1->val<=list2->val) {
                temp->next = list1;
                list1 = list1->next;
            }
            else {
                 temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        while(list1!=NULL) {
            temp->next = list1;
            list1 = list1->next;
             temp = temp->next;
        }
        while(list2!=NULL) {
             temp->next = list2;
            list2 = list2->next;
             temp = temp->next;
        }
        return mergedList->next;
    }
};