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
string s;
cin >> s;
bool fflag = true, eflag = true;
for(int i=0;i<3;i++)
{
    if((s[i]+1 - '0')%10 != s[i+1] - '0')
        fflag = false;
    if(s[0] != s[i+1])
        eflag = false;
}

if(fflag || eflag)
    cout << "Weak\n";
else
    cout << "Strong\n";
return 0;
}