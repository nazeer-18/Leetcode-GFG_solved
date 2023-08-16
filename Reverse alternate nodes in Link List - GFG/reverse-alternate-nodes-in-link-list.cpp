//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        //add code here
        if(!odd->next) return;
        Node* t1=odd,*t2=odd->next,*h2=t2,*tmp,*t1tmp=t2->next;
        while(tmp!=NULL && t1!=NULL && t2!=NULL && t1tmp!=NULL){
            t1->next=t1tmp;
            if(t1tmp){
                t1=t1tmp;
                tmp=t1->next;
                if(tmp) {
                    t1tmp=tmp->next;
                    tmp->next=h2;
                    h2=tmp;
                }
            } 
        }
        if(t1tmp){
            t1->next=t1tmp;
            t1=t1tmp;
        }
        t2->next=NULL;
        t1->next=h2;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends