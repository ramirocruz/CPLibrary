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
cin >> n;
vector<int>fact(10,1);
for(int i=0;i<9;i++)
{
    fact[i+1] = fact[i] * (i+2);
}
int count  = 0;

// for(auto &x:fact)
//     cout << x <<" ";
// cout << endl;
for(int i=9;i>-1;i--)
{
    if(n==0)
        break;
    if(fact[i] > n)
        continue;
    count += n/fact[i];
    // cout << i+1 << ' ';
    n%=fact[i];
}
// cout <<endl;

cout << count <<endl;
return 0;
}