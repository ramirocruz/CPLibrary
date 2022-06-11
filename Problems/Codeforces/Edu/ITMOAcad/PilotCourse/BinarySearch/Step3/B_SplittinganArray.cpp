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

int n , k;
cin >> n >> k;
vector<int>ar(n);
for(int i=0;i<n;i++)
{
    cin >> ar[i];
}

int minval = INT_MIN;
long long  maxval = 0;

for(int i=0;i<n;i++)
{
    minval = max(minval,ar[i]);
    maxval += ar[i];
}
long long l = minval,r= maxval;
while(l < r)
{
    long long mid = l + (r - l)/2;
    long long sum=0,cnt=1;
    for(int i=0;i<n;i++)
    {
        sum += ar[i];
        if(sum > mid)
        {
            cnt++;
            sum = ar[i];
        }
    }

    if(cnt <= k)
    {
        r = mid;
    }
    else
    {
        l = mid + 1;
    }
}

cout << l << endl;
return 0;
}