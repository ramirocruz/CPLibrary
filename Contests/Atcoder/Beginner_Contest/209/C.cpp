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
int n ;
int MOD = 1e9 + 7;
cin >> n;
int temp;
long long ans = 1;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin >> v[i];
}
sort(v.begin(),v.end());
for(int i=0;i<n;i++)
{
    ans = (ans * max(0,(v[i] - i)))%MOD;
}
cout << ans << endl;
return 0;
}