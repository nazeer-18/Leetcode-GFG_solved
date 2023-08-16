//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
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
    Node *mid=NULL,*root;bool ex=true;int k;
    void solve(Node* slow,Node *fast){
        if(!fast){
            root=slow;
            return;
        }if(!fast->next){
            root=slow->next;
            return;
            
        }
        solve(slow->next,fast->next->next);
        if(root==mid){
            ex=false;
        }
        if(ex){
            k=slow->data;
            slow->data=root->data-slow->data;
            root->data=k;
            root=root->next;
        }
    }
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        root=head;
        solve(head,head);
        return head;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends