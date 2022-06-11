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

while (t -- )
{
    string s;
    cin >> s;
    vector<int>fcount(3);
    for(auto &x:s)
    {
        fcount[x -'A']++;
    }
    fcount[1] -= (fcount[0] + fcount[2]);
    if(fcount[1] == 0)
        cout << "YES\n";
    else
        cout << " NO\n";
}
return 0;
}