#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;
cin >> n >> k;
vector<int> v(n);
for(int i=0;i<n;i++)
    cin >> v[i];
int sum=0;
int minsum = INT_MAX;
for(int i=0;i<k-1;i++)
    sum+=v[i];
int ans = -1;
for(int i=0;i+k<=n;i++)
{
    sum+=v[i+k-1];
    if(sum < minsum)
    {
        minsum = sum;
        ans = i;
    }
    sum-=v[i];
}

cout << ans + 1 << endl;
return 0;
}