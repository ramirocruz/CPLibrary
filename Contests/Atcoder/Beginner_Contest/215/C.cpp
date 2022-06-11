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
int k;
cin >> k;
k--;
sort(s.begin(),s.end());
while(k--)
{   
        next_permutation(s.begin(),s.end());
}
cout << s << endl;
return 0;
}