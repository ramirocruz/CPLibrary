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
    int n;  bool status = false;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    for(int i=0;i<n-1;i++)
    {
        if(abs(ar[i] - ar[i+1]) > 1)
         {
             status = true;
             break;
         }
    }
    if(status)
    cout<<"NO\n";
    else
    {
        cout<<"YES\n";
    }
    
}
return 0;
}