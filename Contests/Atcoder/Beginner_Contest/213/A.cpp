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

int a,b;
cin >> a >> b;
cout << (a^b) <<endl;
return 0;
}