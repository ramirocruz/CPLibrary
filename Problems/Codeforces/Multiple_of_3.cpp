#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 //freopen("input.txt", "r", stdin); 
 //freopen("output.txt", "w", stdout); 

int t,d0,d1;
long long k;
cin>>t;
while(t--)
{
    cin>>k>>d0>>d1;

if((((d0+d1)%10)%3) == 0)
cout<<"YES\n";
else
{
    cout<<"NO\n";
}
}
return 0;
}