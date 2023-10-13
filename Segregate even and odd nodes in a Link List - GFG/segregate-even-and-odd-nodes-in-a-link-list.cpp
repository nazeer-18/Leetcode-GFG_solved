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
        cout << node->data <<" "; 
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
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* os=NULL,*oe=NULL,*es=NULL,*ee=NULL;
        while(head){
            if((head->data)&1){
                if(!os) {
                    os=head;
                    oe=os;
                }
                else{
                    oe->next=head;
                    oe=oe->next;
                }
            }else{
                if(!es) {
                    es=head;
                    ee=es;
                }
                else{
                    ee->next=head;
                    ee=ee->next;
                }
            }
            head=head->next;
        }
        if(!es) return os;
        ee->next=os;
        if(os) oe->next=NULL;
        return es;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends