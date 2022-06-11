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
    vector<vector<int>>nums(n,vector<int>(2));
    int x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        nums[i] = {x,i};
    }
    sort(nums.begin(),nums.end());
    int k = -1;
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        int mx = nums[i][0];
        k = min(k+1,mx-1);
        int idx = nums[i][1];
        ans[idx] = k;
        
    }
    for(auto &x:ans)
    {
        cout << x <<" ";
    }
    cout << endl;

}
return 0;
}