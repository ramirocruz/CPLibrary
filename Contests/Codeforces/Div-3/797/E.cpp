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
cin >> t;
while(t--)
{
    int n,k;
    cin >> n >> k ;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];

    }
    vector<int>fcount(k);
    long long ans = 0;
    for(int i=0;i<n;i++)
    {
        ans += nums[i]/k;
        fcount[(nums[i]%k)]++;
    }
    // cout << ans <<" -- "<<endl;
    // for(auto &x:fcount)
    //     cout << x <<" ";
    // cout << endl;
    
    int l = 1, r = k-1; 
    while(l <= r)
    {
        if(fcount[r] == 0)
        {
            r--;
            continue;
        }
        if(fcount[l] == 0 || r + l < k)
        {
            l++;
            continue;
        }
        if(r == l)
        {
            ans += fcount[l]/2;
            break;
        }
        else
        {
            int val = min(fcount[l],fcount[r]);
            fcount[l] -= val;
            fcount[r] -= val;
            ans += val;

        }

    }
    cout << ans << endl;
}
return 0;
}