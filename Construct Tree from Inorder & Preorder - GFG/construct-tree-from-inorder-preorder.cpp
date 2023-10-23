//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int i = 0,m;
    int search(int p[], int v){
        for(int j=0;j<m;j++){
            if(p[j]==v){
                p[j]=-1;
                return j;
            } 
        }
        return -1;
    }
    Node* help(int in[],int pre[], int s,int e){
        if(s>e) return NULL;
        Node* root = new Node(pre[i]);
        int t= search(in,pre[i]);
        i++;
        if(s==e) return root;
        root->left = help(in,pre,s,t-1);
        root->right = help(in,pre,t+1,e);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        m=n;
        return help(in,pre,0,n-1);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends