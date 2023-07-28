//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void setRow(vector<vector<int>> &matrix,int i, int n){
        int j = 0;
        for(j=0;j<n;j++){
            if(matrix[i][j]!=1){
                matrix[i][j]=-1;
            } 
        }
    }
    void setCol(vector<vector<int>> &matrix,int i, int n){
        int j = 0;
        for(j=0;j<n;j++) {
            if(matrix[j][i]!=1){
                matrix[j][i]=-1;
            } 
        }
    }
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int i=0,j=0,m=matrix.size(),n=matrix[0].size();
        int r[m],c[n];
        for(i=0;i<m;i++) r[i]=0;
        for(i=0;i<n;i++) c[i]=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrix[i][j]==1){
                    if(r[i]==1 && c[j]==1) continue;
                    if(r[i]!=1){
                        setRow(matrix,i,n);
                        r[i]=1;
                    } 
                    if(c[j]!=1){
                        setCol(matrix,j,m);
                        c[j]=1;
                    } 
                    
                }
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++) {
                if(matrix[i][j]==-1) matrix[i][j]=1;
            }
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends