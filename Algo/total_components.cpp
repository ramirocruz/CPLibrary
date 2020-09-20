#include<bits/stdc++.h>
using namespace std;

/*

Given a matrix of 0 and 1 and group of 1s together are one component. We have to find total component.
We can run DFS on each component.
If we find a 1 and its not visited then this is new component. We can then run DFS again.
This way we can get a count of all the components.

*/

void DFS(vector<vector<int>>&mat , vector<vector<bool>>&visited, int i ,int j,int row,int col)
    {
        if(i<row && i>-1 && j<col && j>-1)
        {
            if(mat[i][j] && !visited[i][j])
            {
                visited[i][j]=1;
                DFS(mat,visited,i-1,j,row,col);
                DFS(mat,visited,i,j-1,row,col);
                DFS(mat,visited,i+1,j,row,col);
                DFS(mat,visited,i,j+1,row,col);
            }
        }
        
    }
    
    int solve(vector<vector<int>>& matrix) {
      
        vector<vector<bool>> visited(matrix.size());
        
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                visited[i].push_back(0);
            }
        }
        int count =0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
               if(matrix[i][j] && !visited[i][j])
               {
                   count++;
                   DFS(matrix,visited,i,j,matrix.size(),matrix[0].size());
               }
            }
        }
       return count; 
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);


return 0;
}