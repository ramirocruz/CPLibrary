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
int n;
vector<int>len(n),speed(n);
int totallen = 0;
for(int i=0;i<n;i++)
{
    cin >> len[i] >> speed[i];
    totallen += len[i];
}

int left = 0 ,right = totallen;
int l = 0, r = n-1;
while(left < right)
{
    left += speed[i]
}



return 0;
}