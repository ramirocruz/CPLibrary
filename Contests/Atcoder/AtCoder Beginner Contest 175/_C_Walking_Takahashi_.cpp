#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long dist,X,K,D, ans,ans2;


cin>>X>>K>>D;
dist = abs(X);
ans = dist%(D);
ans2 = abs(ans - D);

long long steps = dist/D;


if( steps >= K)
 ans = dist - K*D;
else 
{
     if((K-steps)%2 == 1)
     ans = ans2;
}

cout<<ans<<endl;

return 0;
}