#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long K;
cin>>K;
int ans=0;
if(K%2 == 0 || K%5 == 0)
 ans =-1;
else
{
    long long num =7%K;
    ans++;
    while(num)
    {
        num = (num*10 + 7)%K;
        ans++;
    }
}

cout<<ans<<endl;
return 0;
}