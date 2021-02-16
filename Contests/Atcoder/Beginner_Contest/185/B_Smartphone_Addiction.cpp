#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

long long N,M,T;
cin>>N>>M>>T;
vector<array<long long,2>> ar(M);
for(int i=0;i<M;i++)
    cin>>ar[i][0]>>ar[i][1];

long long bat = N;
bool flag = false;
long long prev =0;
for(int i=0;i<M;i++)
{
    bat -= (ar[i][0] - prev);
    prev = ar[i][0];
    if(bat <= 0)
    {
        flag = true;
        break;
    }
    bat += (ar[i][1] - prev);
    prev = ar[i][1];
    bat = min(bat,N);
}

bat -= (T - prev);
if(bat <= 0)
    flag = true;

if(flag)
cout<<"No\n";
else
{
    cout<<"Yes\n";
}


return 0;
}