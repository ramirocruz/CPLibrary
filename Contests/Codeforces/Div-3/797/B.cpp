#include <bits/stdc++.h>
using namespace std;

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("D:\\Study\\CPLibrary\\IO\\input.txt","r",stdin);
freopen("D:\\Study\\CPLibrary\\IO\\output.txt","w",stdout);
#endif 

int t;
cin>>t;
while(t--)
{
    int n;
    cin >> n;
    vector<int>A(n),B(n);
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> B[i];
    }
    for(int i=0;i<n;i++)
    {
        A[i] -= B[i];
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(B[i])
        {
            ans = max(ans,A[i]);
        }
    }
    if(ans == INT_MIN)
    {
        cout <<"YES\n";
        continue;
    }
    bool flag = false;
    
    for(int i=0;i<n;i++)
    {
        if(B[i] && A[i] != ans)
        {
            flag  = true;
            break;
        }
        if(!B[i] && A[i] > ans)
        {
            flag = true;
            break;
        }
    }

    if(ans < 0  || flag)
    {
        cout << "NO\n";
    }
    else
    {
        cout <<"YES\n";
    }
}
return 0;
}