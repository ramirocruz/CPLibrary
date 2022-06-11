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
for(int tc = 1; tc <= t; tc++)
{
    int n ;
    cin >> n;
    string s;
    cin >> s;
    bool isC = false, isc = false, isD = false, isS = false;
    for(auto c:s)
    {
        if(c >= 'A' && c <= 'Z')
            isC = true;
        else if(c >= 'a' && c <= 'z')
            isc = true;
        else if(c >='0' && c <= '9')
            isD = true;
        else if(c == '#' || c == '&' || c == '@' || c == '*')
            isS = true;
    }

    if(!isC)
        s += 'A';
    if(!isc)
        s += 'a';
    if(!isD)
        s += '0';
    if(!isS)
        s += '#';
    while(s.size() < 7)
        s += 'a';

    cout << "Case #"<<tc<<": "<<s<<endl;    
}


return 0;
}