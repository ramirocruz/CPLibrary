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
    int n;
    cin>>n;
    vector<int> ar(n),ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0,k=0;i<n/2;i++)
    {
        ans[k] = ar[i];
        // cout<<" ar - "<<ar[i]<<" ";
        k+=2;
    }
    for(int i=n-1,k=1;i>=(n -n/2);i--)
    {
        ans[k] = ar[i];
        k+=2;
    }
    if(n&1)
    {
        ans[n-1] = ar[n/2];
    }

    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
return 0;
}