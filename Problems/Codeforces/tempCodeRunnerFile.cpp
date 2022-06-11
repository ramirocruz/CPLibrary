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

string s;
cin >> s;
int n = s.size();
vector<int> z(n);

for(int i=1,l=0,r=0;i < n;i++)
{
    if(i <= r)
    {
        z[i] = min(z[i-l],r - i + 1);
    }
    while(z[i] + i < n && s[z[i]] == s[z[i] + i])
    {
        z[i]++;
    }
    if(i + z[i] - 1 > r)
    {
        l = i;
        r = i + z[i] - 1;
    }
}
z[0] = n;
map<int,int>mp;
unordered_set<int>st;
for(auto &x:z)
{
    // cout << x <<" ";
    if(x)
    {
        st.insert(x);
        mp[1]++;
        mp[x+1]--;
    }
}
// cout << endl;

int len = 0;
cout << st.size() << endl;
for(auto &x:mp)
{
    if(st.count(x.first - 1))
    {
        cout << x.first - 1 <<" "<<len<<endl;
    }
    len += x.second;
}
return 0;
}