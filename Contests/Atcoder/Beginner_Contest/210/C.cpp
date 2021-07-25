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

int n,k;
cin >> n >> k;

vector<int>v(n);
for(int i=0;i<n;i++)
    cin >> v[i];
unordered_map<int,int>mp;
for(int i=0;i<k;i++)
{
    mp[v[i]]++;
}
int ans = mp.size();
for(int i=k;i<n;i++)
{
    mp[v[i-k]]--;
    if(mp[v[i-k]] == 0)
        mp.erase(v[i-k]);
    mp[v[i]]++;

    ans = max(ans,(int)mp.size());
}
cout << ans << endl;
return 0;
}