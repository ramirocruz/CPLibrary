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
unordered_set<string>st;
for(int i=0;i<4;i++)
{
       cin >> s;
    st.insert(s);
}

if(st.size() == 4)
    cout << "Yes\n";
else   
    cout <<"No\n";


return 0;
}