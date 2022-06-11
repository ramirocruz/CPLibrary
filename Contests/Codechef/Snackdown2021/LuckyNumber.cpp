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
while(t--)
{
    int a,b,c;
    cin >> a >> b >> c ;
    if(a == 7 || b == 7 || c == 7)
        cout <<"YES\n";
    else
        cout <<"NO\n";
}
return 0;
}