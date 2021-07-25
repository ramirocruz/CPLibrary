#include<bits/stdc++.h>
using namespace std;

bool iscyclic(int node,pair<int,int>&ans,vector<int>&parent,vector<vector<int>>&graph,vector<short>&visited)
{
    visited[node] = 1;
    for (auto &u:graph[node])
    {
        if(visited[u] == 1 && parent[node] != u)
        {
            ans = {u,node};
            return true;
        }
        
        if(!visited[u])
        {   
            parent[u]=node;
            if(iscyclic(u,ans,parent,graph,visited))
                return true;
        }                

    }
    visited[node] = 2;
    return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<vector<int>>graph(n);
for(int i=0;i<m;i++)
{
    int u,v;
    cin>>u>>v;
    graph[u-1].push_back(v-1);
    graph[v-1].push_back(u-1);   
}
vector<short>visited(n);
vector<int>parent(n,-1);
pair<int,int>ans;
bool flag=false;

for(int i=0;i<n;i++)
{
    if(!visited[i])
    {

        if(iscyclic(i,ans,parent,graph,visited))
        {
            flag = true;            
            break;
        }
    }
}

if(flag)
{
    int start = ans.first;
    int end = ans.second;
    stack<int> res;
    res.push(start);
    res.push(end);
    while (end != start)
    {
        end = parent[end];
        res.push(end);
    }
    cout<<res.size()<<endl;
    while(res.size())
    {
        cout<<res.top()+1<<" ";
        res.pop();
    }
    cout<<endl;
    
}
else
{
    cout<<"IMPOSSIBLE\n";
}
return 0;
}