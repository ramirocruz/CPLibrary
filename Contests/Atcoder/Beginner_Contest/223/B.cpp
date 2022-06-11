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
set<string>st;
int n = s.size();
for(int i=0;i<n;i++)
{
    st.insert(s);
    s = s.back() + s.substr(0,n-1);
}
cout << *st.begin() << endl;
cout << *st.rbegin() << endl;
return 0;
}