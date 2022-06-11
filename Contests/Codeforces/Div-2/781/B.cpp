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
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        cin >> nums[i];

    sort(nums.begin(),nums.end());
    // for(auto &x:nums)
    //     cout << x <<" ";
    // cout << endl;
    int cur = 0;
    for(int i=0;i<n;i++)
    {
        int st = i;
        i++;
        while(i < n && nums[i] == nums[i-1])
        {
            i++;
        }
        cur = max(cur, i - st);
    }
    cout << cur << endl;
    int steps = 0;
    while(cur != n)
}
return 0;
}