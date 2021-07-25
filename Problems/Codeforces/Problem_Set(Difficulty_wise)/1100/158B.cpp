#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n;
cin>>n;
vector<int>fcount(4);
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    fcount[x-1]++;
}

int ans=0;
int d=0;
ans+= fcount[3];

d = min(fcount[2],fcount[0]);
ans += d;

fcount[2] -= d;
fcount[0] -= d;
d = fcount[1]/2;
ans += d;

fcount[1]-= 2*d;
d = min(fcount[1],fcount[0]/2);
ans+=d;

fcount[1] -= d;
fcount[0] -= 2*d;
d = fcount[0]/4;
ans+=d;
fcount[0] -= 4*d;

ans += (bool) (fcount[0] + fcount[1]);
ans+= fcount[2];

cout<<ans<<endl;

return 0;
}