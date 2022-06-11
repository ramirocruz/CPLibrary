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
unsigned long long res = 1,n;
cin >> n;

int p = 0 ;
while(res <= n)
{
    res = res<<1;
    p++;
}
cout << (p-1) << endl;
return 0;
}