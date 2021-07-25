#include <bits/stdc++.h>
using namespace std;

void dfs(int start,vector<vector<int>>&g,vector<bool>&vis,int &ans)
{
    vis[start] = true;
    ans++;
    for(auto & u:g[start])
    {

        if(!vis[u])
        {
            dfs(u,g,vis,ans);
        }
    }
}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("D:\\Study\\CPLibrary\\IO\\input.txt","r",stdin);
freopen("D:\\Study\\CPLibrary\\IO\\output.txt","w",stdout);
#endif 

int n ,m;
cin >> n >> m;
vector<vector<int>>g(n);
for(int i=0;i<m;i++)
{
    int u,v;
    cin >> u >> v;
    u--,v--;
    g[u].push_back(v);
}
vector<vector<int>>dp(n,vector<int>(n,-1));

int count =0;
for(int i=0;i<n;i++)
{
    vector<bool> vis(n) ;
    dfs(i,g,vis,count);
}
cout << count << endl;
return 0;
}