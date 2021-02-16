#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
string N;
unsigned long long sum =0;
cin>>N;
for(char c:N)
{
    sum+= c - '0';
}
if(sum%9 == 0)
cout<<"Yes\n";
else
{
    cout<<"No\n";
}


return 0;
}