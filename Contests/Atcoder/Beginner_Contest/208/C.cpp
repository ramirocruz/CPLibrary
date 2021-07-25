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

long long n,k;
cin >> n >> k;
vector<int>ar(n),ar2(n);
for(int i=0;i<n;i++)
{
    cin>>ar[i];
    ar2[i] = ar[i];
}
sort(ar2.begin(),ar2.end());
vector<int>rank(n);
for(int i=0;i<n;i++)
{
    int pos = lower_bound(ar2.begin(),ar2.end(),ar[i]) - ar2.begin();
    rank[i] = pos;
}

long long val = k/n;
long long cnt = k%n;
for(int i=0;i<n;i++)
{
    if(rank[i] < cnt)
        cout << val+1<<endl;
    else
        cout << val<<endl;
}
    

return 0;
}