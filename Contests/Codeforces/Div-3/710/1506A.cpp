#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int t;
cin >> t;
while(t--)
{
    long long n , m , x;
    cin >> n >> m >> x;
    x--;
    long long  j = x/n;
    long long i = x%n;
    long long ans = i*m + j + 1;
    cout << ans << endl;

}

return 0;
}