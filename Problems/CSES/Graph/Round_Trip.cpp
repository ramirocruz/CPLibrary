#include<bits/stdc++.h>
using namespace std;

bool iscyclic(int node,vector<bool>&instack,pair<int,int>&ans,vector<int>&parent,vector<vector<int>>&graph,vector<bool>&visited)
{
    visited[node] = true;
    instack[node] = true;
    for (auto &u:graph[node])
    {
        if(visited[u] && instack[u])
        {
            ans = {u,node};
            return true;
        }
        parent[u]=node;
        bool stat = iscyclic(u,instack,ans,parent,graph,visited);
        if(stat)
            return true;        

    }
    instack[node] = false;
    return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<vector<int>>graph(n);
vector<bool>instack(n);
for(int i=0;i<m;i++)
{
    int u,v;
    cin>>u>>v;
    graph[u-1].push_back(v-1);   
}
vector<bool>visited(n);
vector<int>parent(n,-1);
pair<int,int>ans;
bool flag=false;
for(auto &x:graph)
{
    for(auto el:x)
        cout<<el<<" ";
    cout<<endl;
}
for(int i=0;i<n;i++)
{
    if(!visited[i])
    {
        if(iscyclic(i,instack,ans,parent,graph,visited))
            {
                flag = true;
                break;
            }
    }
}
if(flag)
{
    int beg =ans.first;
    int end = ans.second;
    stack<int>st;
    st.push(end);
    st.push(beg);
    while(beg != end)
    {
        beg = parent[beg];
        st.push(beg);       
    }
    cout<<st.size()<<endl;
    while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
else
{
    cout<<"IMPOSSIBLE\n";
}
return 0;
}