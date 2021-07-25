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
     long long a,b,x,y,n;
    cin >> a >> b >> x >> y >> n;
    
     long long diff1 = a - x,diff2 =  b - y;
     if (diff1 + diff2 <= n)
     {
         cout << x*y << endl;
     }
     else
     {
           long long d = min(n,diff1);
           long long e = min(n - d,diff2);
           long long ans = (a - d)*(b - e);
           d = min(n,diff2);
           e = min(n - d,diff1);
           ans = min( (a - e)*(b - d) , ans);
           cout << ans << endl;

     }


}

return 0;
}