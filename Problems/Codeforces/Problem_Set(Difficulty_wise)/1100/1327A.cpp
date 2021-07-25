#include<bits/stdc++.h>
using namespace std;
inline bool check(int n,int k)
{
    long long temp = k;
    temp*=temp;
    if( n < temp)
        return false;
    if(n%2 != k%2)
        return false;
    
    return true;

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int t;
cin >> t;
while (t--)
{
    int n,k;
    cin >> n >> k;
    if(check(n,k))
        cout << "YES\n";
    else
        cout << "NO\n";

}


return 0;
}