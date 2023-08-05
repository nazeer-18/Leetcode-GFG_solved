//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

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

class Solution
{
    public:
    Node* solve(Node* head,Node* temp){
        if(head->next==NULL){
            head->data++;
            if(head->data<10) return head;
            if(temp==head){
                head->data%10;
                Node* t = new Node(1);
                t->next=head;
                return t;
            }
            return head;
        }
        Node* tmp = addOne(head->next);
        if(head->next->data<10) return head;
        else {
            head->data++;
            head->next->data%=10;
        }
         if(temp==head && head->data>=10){
                head->data%10;
                Node* t = new Node(1);
                t->next=head;
                return t;
            }
        return head;
    }
    Node* addOne(Node *head) 
    {
       return solve(head,head);
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends