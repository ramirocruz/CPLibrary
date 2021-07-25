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
string s;
cin >> n;
cin >>s;
for(int i=0;i<n;i++)
{
    if(s[i] == '1')
    {
        if(i&1)
            cout << "Aoki\n";
        else
            cout << "Takahashi\n";
        
        break;
    }
}
return 0;
}