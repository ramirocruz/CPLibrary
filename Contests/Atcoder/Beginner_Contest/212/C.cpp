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
int m,n;
cin >> n >> m;
vector<int>A(n),B(m);
for(int i=0;i<n;i++)
    cin >> A[i];
for(int i=0;i<m;i++)
    cin >> B[i];

sort(B.begin(),B.end());
int ans = INT_MAX;
for(int i=0;i<n;i++)
{
    int pos = lower_bound(B.begin(),B.end(),A[i]) - B.begin();
    int temp = B.back();
    if(pos != m)
        temp = B[pos];

    ans = min(ans,(int)abs(temp - A[i]));
    if(pos != 0)
    {
        temp = B[pos - 1];
        ans = min(ans,(int)abs(temp - A[i]));
    }
}
cout << ans << endl;
return 0;
}