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
int n;
cin >> n;
if(n && n%100 == 0)
    cout <<"Yes\n";
else
    cout <<"No\n";
return 0;
}