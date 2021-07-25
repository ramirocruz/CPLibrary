#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n,m;
cin >> n >> m ;
int x ;
unordered_set<int>st;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin >> v[i];
}
for(int i=n-1;i>-1;i--)
{
    st.insert(v[i]);
    v[i] = st.size();
}
for(int i=0;i<m;i++)
{
    cin >> x;
    x--;
    cout << v[x] << endl;
}

return 0;
}