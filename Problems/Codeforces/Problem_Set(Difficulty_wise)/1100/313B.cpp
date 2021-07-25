#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
string s;
cin >> s;
n = s.size();
vector<int>prefix(n);

for(int i=0; i<n-1;i++)
{
    prefix[i+1] = (s[i]==s[i+1]);
    prefix[i+1] += prefix[i];

}
int q;
cin >> q;
while(q--)
{
    int x,y;
    cin >> x >> y;
    cout << prefix[y-1] - prefix[x-1] << endl;
}
// for(auto &x:prefix)
//     cout << x<<" ";
// cout << endl;

return 0;
}