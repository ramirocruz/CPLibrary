#include <bits/stdc++.h>
using namespace std;

struct Comp{
    bool operator () (pair<pair<string,int>,int> &a,pair<pair<string,int>,int> &b)
    {
        auto &A = a.first;
        auto &B = b.first;
        if(A.second == B.second)
            return A.first > B.first;
        
        return A.second > B.second;
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

int n,m;
cin >> n >> m;
vector<vector<array<int,2>>>g(n);
for(int i=0;i<m;i++)
{
    int u,v,w;
    cin >> u >> v >> w;
    g[u].push_back({v,w});
    g[v].push_back({u,w});
}
int dest;
cin >> dest;
vector<int>d(n,INT_MAX);
vector<string>dpath(n);
d[dest] = 0;
dpath[dest] = to_string(dest);
priority_queue<pair<pair<string,int>,int>,vector<pair<pair<string,int>,int>>,Comp> minheap;
minheap.push({{to_string(dest),0},dest});
while(minheap.size())
{
    auto f = minheap.top();
    minheap.pop();
    int node = f.second;
    int dist = f.first.second;
    string &path = f.first.first;
    for(auto &e:g[node])
    {
        int w = e[1];
        int v = e[0];
        if(d[node] + w < d[v])
        {
            d[v] = d[node] + w;
            dpath[v] = to_string(v) + dpath[node];
            // cout << v <<" - " << dpath[v] <<" "<<dpath[node] <<" "<<node<< endl;
            minheap.push({{dpath[v],d[v]},v});
        }
        else if(d[node] + w == d[v])
        {
            
            if( to_string(v) + dpath[node] < dpath[v])
            {
                dpath[v] = to_string(v) + dpath[node];
                minheap.push({{dpath[v],d[v]},v});
            }
        }
    }
    
}

for(int i=0;i<dpath.size();i++)
{
    if(i == dest)
        continue;
    for(auto &c:dpath[i])
        cout << c <<" ";
    cout << endl;
}
    
return 0;
}