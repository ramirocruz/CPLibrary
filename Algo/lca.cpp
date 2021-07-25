#include <bits/stdc++.h>
using namespace std;

struct LCA
{
    vector<int> euler, vis, first, height, segtree;

    LCA(vector<vector<int>>&g,int root = 0)
    {
        int n = g.size();
        vis.assign(n,false);
        first.resize(n);
        height.resize(n);
        euler.reserve(2*n);
        dfs(root,g,0);
        int m = euler.size();
        segtree.resize(4*m);
        build(0,m-1,0);
    }

    void dfs(int node,vector<vector<int>>&g,int h)
    {
        vis[node] = true;
        height[node] = h;
        first[node] = euler.size();
        euler.push_back(node);
        for(auto &u:g[node])
        {
            if(!vis[u])
            {
                dfs(u,g,h+1);
                euler.push_back(node);
            }
        }
    }
    int build(int start,int end,int treeNodepos)
    {
        if(start == end)
            return segtree[treeNodepos] = euler[start];
        int mid = (start + end)/2;
        int leftnode = treeNodepos*2 + 1;
        int rightnode = leftnode + 1;
        int res1 = build(start,mid,leftnode);
        int res2 = build(mid+1,end,rightnode);
        return segtree[treeNodepos] = min(res1,res2);
    }

    int query_helper(int nodepos,int left,int right,int curleft,int curright)
    {
        //Full overlap
        if(left <= curleft && right >= curright)
            return segtree[nodepos];

        //No overlap
        if(curright < left || curleft > right)
            return INT_MAX;
        
        //Partial overlap
        int mid = (curleft + curright)/2;
        int leftnode = 2*nodepos + 1;
        int rightnode = leftnode + 1;

        int res1 = query_helper(leftnode,left,right,curleft,mid);
        int res2 = query_helper(leftnode,left,right,mid+1,curright);
        
        return min(res1,res2);

    }

    int get_lca(int left,int right)
    {
        if(left > right)
            swap(left,right);
        return query_helper(0,left,right,0,(int)euler.size() - 1);
    }
};

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("D:\\Study\\CPLibrary\\IO\\input.txt","r",stdin);
freopen("D:\\Study\\CPLibrary\\IO\\output.txt","w",stdout);
#endif 
int n,q;
cin >> n >> q;
vector<vector<int>>g(n);
int u,v;
for(int i=0;i<n-1;i++)
{
    cin >> u >> v;
    u--;v--;
    g[u].push_back(v);
    g[v].push_back(u);
}

LCA temp(g);

for(int i=0;i< q;i++)
{
    cin >> u >> v;
    u--;v--;
    int lca = temp.get_lca(u,v);
    int pathlen = temp.height[u] + temp.height[v] - 2*lca;

    if(pathlen&1)
        cout <<"Road\n";
    else
        cout <<"Town\n";
}
return 0;
}