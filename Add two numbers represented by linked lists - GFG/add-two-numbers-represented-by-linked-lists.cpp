//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
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


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    int findLen(Node* f){
        int len=0;
        while(f) {
            len++;
            f=f->next;
        }
        return len;
    }
    int c=0;
    void solve(Node* s,Node* &l, int diff){
        if(diff!=0){
            solve(s,l->next,diff-1);
        }else if(s->next!=NULL){
            solve(s->next,l->next,0);
        }
        if(diff==0){
            //cout<<"zze "<<diff<<l->data<<endl;
            l->data+=(s->data+c);
            if(l->data>9){
                c=1;
                l->data%=10;
            } else c =0;
        }else{
            //cout<<"gbjhk ";
            l->data+=c;
            if(l->data>9){
                c=1;
                l->data%=10;
            } else c=0;
        }
    }
    struct Node* addTwoLists(struct Node* f, struct Node* s)
    {
        // code here
        int m=0,n=0,diff=0;
        m=findLen(f);
        n=findLen(s);
        if(n<m) {
            swap(f,s); swap(n,m);
        }
        diff=n-m;
        solve(f,s,diff);
        Node* extra = new Node(1);
        if(c!=0){
            extra->next=s;
            return extra;
        }else return s;
    }
};


//{ Driver Code Starts.

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
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends