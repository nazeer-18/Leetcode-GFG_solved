//{ Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
        
    bool f=true;
    
    for(int i=0; i<num; i++){
        if((i==K-1) || (i==num - K)){
            if(!((before[K-1] == after[num - K]) && (before[num-K] == after[K-1]))) f=0;
        }
        else{
            if(before[i] != after[i]) f=0;
        }
    }
    
    return f;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int n, int k)
{
    // Your Code here
    if(k>n || ( (n&1) && (2*k==n+1) )) return head;
    Node *p1 = head,*p2=head,*c1=head,*c2=NULL,*n2=NULL,*n1=NULL;
    k=min(k,n-k+1);
    for(int i=1;i<n-k;i++){
        p2 = p2->next;
    }
    for(int i=2;i<k;i++){
        p1 = p1->next;
    }
    if(k==1){
        c2=p2->next;
        p2->next=head;
        c2->next=head->next;
        head->next=NULL;
        head=c2;
    }
    else{
        c2=p2->next;
        c1=p1->next;
        n2=c2->next;
        n1=c1->next;
        p1->next=c2;
        if(p2==c1){
            c2->next=p2;
            p2->next=n2;
        }
        else{
           p2->next = c1;
           c1->next=n2;
           c2->next=n1;
       }
    }
    return head;
}
