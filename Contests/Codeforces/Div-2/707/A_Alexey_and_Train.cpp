#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    vector<int>a(n),b(n),tm(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>tm[i];
    }

    int ans =0;
    int prev =0;
    for(int i=0;i<n;i++)
    {
        ans+= tm[i] + a[i] - prev;
        // cout<<ans<<"a ";
        int diff = ceil((b[i] - a[i])/2.0);
        // cout<<diff<<"d ";
        if(i==n-1)
            break;
        if(ans + diff < b[i])
            ans+= b[i] - a[i];
        else
            ans+= diff;

        prev = b[i];
        
    }
    cout<<ans<<endl;
}


return 0;
}