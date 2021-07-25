#include<bits/stdc++.h>
using namespace std;

inline bool valid(int &i,int &j,int &n,int &m)
{
    if(i<0 || j<0 || i>=n || j>=m)
        return false;
    return true;
}

inline char getpath(pair<int,int>&a,pair<int,int>&b)
{
    int y = a.first - b.first;
    int x = a.second - b.second;
    if(y==0)
    {
        if(x>0)
        {
            return 'R';
        }
        else
        {
            return 'L';
        }
    }
    else
    {
        if(y>0)
        {
            return 'D';
        }
        else
        {
            return 'U';
        }
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<string> g(n);
for(int i=0;i<n;i++)
{
    cin>>g[i];
}
vector<vector<bool>> visited(n,vector<bool>(m));
vector<vector<bool>>vis(n,vector<bool>(m));
vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
queue<array<int,2>> Q;
pair<int,int>start;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(g[i][j]=='#')
        {
            visited[i][j] = true;
            dist[i][j] = INT_MIN;
            vis[i][j] = true;
        }
        else if(g[i][j]=='M')
        {
            Q.push({i,j});
            visited[i][j] = true;
            dist[i][j] = 0;
        }
        else if(g[i][j]=='A')
        {
            start = {i,j};
            vis[i][j] = true;
        }        
    }
}

int paths[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
while (Q.size())
{
    auto f = Q.front();
    Q.pop();
    for(auto &path:paths)
    {
        int x = f[0] + path[0];
        int y = f[1] + path[1];
        if(valid(x,y,n,m) && !visited[x][y])
        {
            Q.push({x,y});
            dist[x][y] = dist[f[0]][f[1]] + 1;
            visited[x][y] = true;
        }
    }

}
// for(auto &x:dist)
// {
//     for(auto &y:x)
//     {
//         if(y==INT_MIN)
//             cout<<"i";
//         else if(y==INT_MAX)
//             cout<<"I";
//         else
//             cout<<y;
//         cout<<'\t';
//     }
//     cout<<endl;
// }
queue<array<int,3>> q;
q.push({start.first,start.second,0});
vector<vector<pair<int,int>>> PATH(n,vector<pair<int,int>>(m));
int ans = -1;
pair<int,int>end;
while (q.size())
{
    auto f = q.front();
    q.pop();
    // cout<<f[0]<<':'<<f[1]<<':'<<f[2]<<endl;
    for(auto &path:paths)
    {
        int x = f[0] + path[0];
        int y = f[1] + path[1];
        // cout<<x<<':'<<y<<endl;
        if(!valid(x,y,n,m))
        {
            ans = f[2];
            end = {f[0],f[1]};
            goto label;
        }  
        if(f[2]+1 < dist[x][y] && !vis[x][y])
        {
            q.push({x,y,f[2]+1});
            vis[x][y] = true;
            PATH[x][y] = {f[0],f[1]};
        }
    }

}
label:;

if(ans!=-1)
{
    vector<char>res;
    while (end != start)
    {
        auto temp = PATH[end.first][end.second];
        res.push_back(getpath(end,temp));
        end = temp;
    }
    reverse(res.begin(),res.end());

    cout<<"YES\n";
    cout<<ans<<endl;
    for(auto &x:res)
        cout<<x;
    cout<<endl;   


}
else
{
    cout<<"NO\n";
}

return 0;
}