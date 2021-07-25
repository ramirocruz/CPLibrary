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

int t ;
cin >> t;

while (t--)
{
    int n;
    cin >> n;
    int fcount[2] = {0},temp=0;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        fcount[temp%2]++;

        cin >> temp;
        fcount[temp%2]++;
    }
    if(fcount[0] != fcount[1])
        cout << "No\n";
    else
        cout << "Yes\n";
}

return 0;
}