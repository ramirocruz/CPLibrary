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
int t;
cin >> t;
while ( t--)
{
    long long  x,k;
    cin >> x >> k;
    cout << x*2 <<" "<<(x*k)*(x*k - 1)<<endl;
}

return 0;
}