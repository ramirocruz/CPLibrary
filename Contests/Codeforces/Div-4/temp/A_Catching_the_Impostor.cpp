#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n,k,x;
cin>>n>>k;
// vector<int>task(k);
unordered_set<int> players;
for(int i=0;i<k;i++)
   { cin>>x;
    players.insert(x);
   }
int s = players.size();
// cout<<n<<" : "<<s<<endl;
if (n - s == 1)
    cout<<"YES\n";
else
    cout<<"NO\n";

return 0;
}