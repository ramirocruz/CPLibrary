#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if ( 360 % (180 - n) == 0)
        cout <<  "YES\n";
    else   
        cout << "NO\n";

}

return 0;
}