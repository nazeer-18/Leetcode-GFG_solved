//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    void print(Node *t){
        while(t){
            cout<<t->data<<" ";
            t=t->next;
        }
        cout<<endl;
    }
    Node* insertionSort(struct Node* head)
    {
        //code here
        Node* temp,*curr=head->next,*prev = head,*next=((curr)?(curr->next):NULL),*tempHead=head,*prevTemp;
        while(curr){
            temp = tempHead;
            prevTemp = NULL;
            while(temp && temp!=curr && temp->data<=curr->data){
                prevTemp = temp;
                temp = temp->next;
            }
            curr->next = temp;
            if(prevTemp!=NULL){
               if(prevTemp!=curr) prevTemp->next = curr;
            }else{
                tempHead = curr;
            }
            if(!prev || prev->data<=curr->data) prev=curr;
            if(prev) prev->next = next;
            curr = next;
            if(curr) next = curr->next;
            //print(tempHead);
        }
        return tempHead;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends