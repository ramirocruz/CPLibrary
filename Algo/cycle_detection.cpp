#include<bits/stdc++.h>
using namespace std;

/*
If the node is in recursion stack and also being 
visited by a other node then their is a loop

*/
bool DFS(int node,vector<int>adj[],vector<bool>&visited,vector<bool>&inStack)
{
    if(visited[node])
    return false;
    
    visited[node]=true;
    inStack[node]=true;
   
    for(auto v:adj[node])
    {
        if(!visited[v] && DFS(v,adj,visited,inStack) )
        {
            
            return true;
        }
        else if(inStack[v])
        return true;
        
    }
    inStack[node]=false;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    // Your code here
    vector<bool>visited(V,false),inStack(V,false);
    
    for(int i=0;i<V;i++)
    {
        if(DFS(i,adj,visited,inStack))
        return true;
    }
    return false;
    
        
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


return 0;
}