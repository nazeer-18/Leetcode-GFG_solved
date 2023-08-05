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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        ListNode gcdn[5001*4];
        ListNode* ptr=&gcdn[0];
        int gcd;
        //cout<<"ji "<<temp->val<<" "<<gcdn.val<<" "<<ptr->val<<endl;
        while(temp && temp->next){
            //cout<<"ji "<<temp->val<<" "<<" "<<ptr->val<<endl;
            gcd=__gcd(temp->val,temp->next->val);
            ptr->val=(gcd);
            ptr->next=temp->next;
            temp->next=ptr;
            temp= ptr->next;
            ptr++;
        }
        
        return head;
    }
};