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
    cin >> n >> k;
    vector<int>nums(n);
    char temp;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        if(temp == 'W')
            nums[i] = 0;
        else
            nums[i] = 1;
    }
    unordered_map<int,int>mp;
    for(int i=0;i<k;i++)
    {
        mp[nums[i]]++;
    }
    int ans = mp[0];
    for(int i=k;i<n;i++)
    {
        mp[nums[i-k]]--;
        mp[nums[i]]++;
        ans = min(ans,mp[0]);
    }
    cout << ans << endl;
}
return 0;
}