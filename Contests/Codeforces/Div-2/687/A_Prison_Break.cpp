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
    int m,n,r,c;
    cin>>n>>m>>r>>c;

    vector<int>ans(4);

    ans[0] = abs(1 - r) + abs(1 - c);
    ans[1] = abs(1 - r) + abs(m - c);
    ans[2] = abs(n - r) + abs(1 - c);
    ans[3] = abs(n - r) + abs(m - c);
    int pos = max_element(ans.begin(),ans.end())  - ans.begin();

    cout<<ans[pos]<<endl;
}

return 0;
}