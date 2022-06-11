#include <bits/stdc++.h>
using namespace std;

bool isvalid(int i,int j,int r,int c)
{
  if(i < 0 || j < 0 || i >=r || j >= c)
    return false;
  return true;
}
int paths[8][2] = {{-1,0},{1,0},{0,1},{0,-1}};
void dfs(int a,int b,vector<string>&g,vector<vector<bool>>&vis)
{
  vis[a][b] = true;
  int r = g.size();
  int c = g[0].size();
  for(auto &path:paths)
  {
    int x = a + path[0];
    int y = b + path[1];
    if(isvalid(x,y,r,c) && !vis[x][y] && g[x][y] == '.')
    {
      dfs(x,y,g,vis);
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

int n,m;
cin >> n >> m;
vector<string>g(n);
for(int i=0;i<n;i++)
  cin >> g[i];

vector<vector<bool>>vis(n,vector<bool>(m));
int ans = 0;
for(int i=0;i<n;i++)
{
  for(int j=0;j<m;j++)
  {
    if(g[i][j] == '.' && !vis[i][j])
    {
      ans++;
      dfs(i,j,g,vis);
    }
  }
}
cout << ans << endl;
return 0;
}