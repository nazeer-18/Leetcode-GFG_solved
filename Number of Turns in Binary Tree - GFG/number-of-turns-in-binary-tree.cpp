//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
      
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
          
        // Get the current node's value from the string
        string currVal = ip[i];
          
        // If the left child is not null
        if(currVal != "N") {
            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }
          
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
          
        // If the right child is not null
        if(currVal != "N") {
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function template for C++
/*
Structure of the node of the tree is as follows 
struct Node {
    struct Node* left, *right;
    int data;
};
*/

class Solution{
  public:
    // function should return the number of turns required to go from first node to second node 
    Node* findLca(Node* root,int a,int b){
        if(!root) return NULL;
        if(root->data==a || root->data==b) return root;
        Node * l = findLca(root->left,a,b);
        Node * r = findLca(root->right,a,b);
        if(!l && !r) return NULL;
        else if(l && r) return root;
        else if(r) return r;
        return l;
    }
    int turns(Node * root,int a,int d){
        if(!root) return 1e9;
        if(root->data==a) return 0;
        if(d==0) 
            return min(turns(root->left,a,0),1+turns(root->right,a,1));
        else if(d==1)
            return min(turns(root->right,a,1),1+turns(root->left,a,0));
        else 
            return min(1+turns(root->right,a,1),1+turns(root->left,a,0));
    }
    int NumberOFTurns(struct Node* root, int a, int b)
    {
      // Your code goes here
      Node * lca = findLca(root,a,b);
      int t1 = turns(lca,a,-1);
      int t2 = turns(lca,b,-1);
      //cout<<t1<<" "<<t2<<endl;
      return t1+t2-1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    struct Node *child;
    scanf("%d ", &t);
    while (t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        int turn, first, second;
        cin>>first>>second;
        Solution ob;
        if ((turn = ob.NumberOFTurns(root, first, second) ))
            cout<<turn<<endl;
        else 
            cout<<"-1\n";
        cin.ignore();
    }
    return 0;
}

// } Driver Code Ends