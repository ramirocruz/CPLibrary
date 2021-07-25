#include <bits/stdc++.h>
using namespace std;

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("D:\\Study\\CPLibrary\\IO\\input.txt","r",stdin);
freopen("D:\\Study\\CPLibrary\\IO\\output.txt","w",stdout);
#endif 
int n,m;
int MOD = 1e9 + 7;
cin >> n >> m;

vector<vector<int>>g(n);
int u,v;

for(int i=0;i<m;i++)
{
    cin >> u >> v;
    u--;v--;
    g[u].push_back(v);
    g[v].push_back(u);   
}

vector<int>dis(n,INT_MAX);
vector<int>dp(n);
dp[n-1] = 1;
dis[n-1] = 0;
queue<int>Q;
Q.push(n-1);
while(Q.size())
{
    int node = Q.front();
    Q.pop();
    int newdis = dis[node] + 1;
    for(auto u:g[node])
    {
        // cout << u << " " << node << endl;
        if(newdis < dis[u])
        {
            dis[u] = newdis;
            dp[u] = (dp[u] +  dp[node]) % MOD;
            Q.push(u);
        }
        else if(newdis == dis[u])
        {
            dp[u] = (dp[u] +  dp[node]) % MOD;
        }
    }
}
// for(auto &x:dis)
//     cout << x << " ";
// cout <<endl;
// for(auto &x:dp)
//     cout << x << " ";
// cout <<endl;



cout << dp[0] << endl;
return 0;
}