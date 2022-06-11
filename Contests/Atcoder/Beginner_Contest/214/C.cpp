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
vector<int>S(n),T(n);
int minpos = 0;
int minval = INT_MAX;
for(int i=0;i<n;i++)
    cin >> S[i];
for(int i=0;i<n;i++)
{
    cin >> T[i];
    if(T[i] < minval)
    {
        minpos = i;
        minval = T[i];
    }
}
    

for(int i=0;i<n;i++)
{
    T[(i+minpos)%n] = min(T[(i+minpos)%n],S[(i-1+n+minpos)%n] + T[(i-1+n+minpos)%n]);
}
for(auto &x:T)
    cout << x << endl;
return 0;
}