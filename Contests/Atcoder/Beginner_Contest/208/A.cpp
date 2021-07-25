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
int A,B;
cin >> A >> B;
int minsum = A;
int maxsum = 6*A;
if( B >= minsum && B <= maxsum)
    cout << "Yes\n";
else
    cout <<"No\n";
return 0;
}