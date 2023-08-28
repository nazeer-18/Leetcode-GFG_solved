//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node* solve(Node* root,int a,int b){
        if(!root) return NULL;
        if(root->data==a || root->data==b){
            return root;
        }
        Node* left = solve(root->left,a,b);
        Node* right = solve(root->right,a,b);
        if(!left && !right){
            return NULL;
        }
        else if(left && right) return root;
        else if(right) return solve(root->right,a,b);
        else return solve(root->left,a,b);
    }
    int dist(Node* root,int a,int tmp){
        if(!root) return -1;
        if(root->data==a){
            return tmp;
        }
        int l = dist(root->left,a,tmp+1);
        int r = dist(root->right,a,tmp+1);
        return max(l,r);
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node* tmp = solve(root,a,b);
        //cout<<tmp->data<<endl;
        int ans= 0;
        ans+=dist(tmp,a,0);
        if(ans==-1) ans=0;
        ans+=dist(tmp,b,0);
        if(ans==-1) ans=0;
        return ans;
    }
    // 41 6 86 1 17 82 88 N 4 7 36
    // 7 82
    
    // 14 13 15 6 N N 20 3 11 17 23 1
    //  3 6
};

//{ Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        int n1, n2;
        scanf("%d %d ", &n1, &n2);
        Solution ob;
        cout << ob.findDist(root, n1, n2) << endl;
     
    }
    return 0;
}

// } Driver Code Ends