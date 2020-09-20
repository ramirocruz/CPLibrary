#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int t;
cin>>t;
while(t--)
{
    int a ,b;
    cin>>a>>b;
    int diff = abs(a-b);

    int ans = (diff/10 + (bool)(diff%10));
    cout<<ans<<endl;
}
return 0;
}