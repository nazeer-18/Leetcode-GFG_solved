//{ Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

Node* subLinkedList(Node* l1, Node* l2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = subLinkedList(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends


/* Structure of linked list Node

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

*/

//You are required to complete this method
int b=0;
void findDiff(Node* l1,Node* l2){
    if(!l1) return;
    findDiff(l1->next,l2->next);
    l1->data-=b;
    b=0;
    if(l1->data<l2->data){
        l1->data+= 10;
        b=1;
    }
    l1->data-=l2->data;
}
void solve(Node* l1,Node* l2,int k){
    if(k==0) {
        findDiff(l1,l2);
        return;
    }
    Node* tmp = l1->next;
    solve(tmp,l2,k-1);
    if(b!=0){
        if(l1->data!=0) {
            l1->data--;
            b=0;
            return;
        }else{
            l1->data=9;
        }
    }
}
Node* subLinkedList(Node* l1, Node* l2)
{
    //Your code here
    int len1=0,len2=0;
    Node* tmp=l1;
    while(tmp && tmp->data==0) tmp=tmp->next;
    l1=tmp;
    while(tmp){
        len1++;tmp=tmp->next;
    }
    tmp=l2;
    while(tmp && tmp->data==0) tmp=tmp->next;
    l2=tmp;
    while(tmp){
        len2++;tmp=tmp->next;
    }
    if(len1==len2){
        Node* t1=l1,*t2=l2;
        while(t1 && t1->data==t2->data){
            t1=t1->next;t2=t2->next;
        }
        if(t1){
            if(t1->data<t2->data){
                swap(l1,l2);
                swap(len1,len2);
            }
        }else{
            l1->data=0;
            l1->next=NULL;
            return l1;
        }
    }
    else if(len1<len2){
        swap(l1,l2);
        swap(len1,len2);
    }
    //l1->larger 
    solve(l1,l2,len1-len2);
    while(l1->next && l1->data==0) l1=l1->next;
    return l1;
}