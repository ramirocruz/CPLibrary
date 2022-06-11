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
    long long n,x,y;
    cin >> n >> x >> y;
    long long totsum = (n*(n+1))/2;
    long long psum = x + y;
    if(totsum % psum == 0)
    {
        vector<int>ans;
        ans.reserve(n);
        int coef = totsum / psum;
        x *= coef;
        y *= coef;
        for(int i = n ; i > 0 ; i--)
        {
            if( i <= x)
            {
                x -= i;
                ans.push_back(i);
            }
        }
        // reverse(ans.begin(),ans.end());
        cout << "Case #"<<tc<<": "<<"POSSIBLE\n";
        cout << ans.size()<<endl;
        for(auto &c:ans)
            cout << c<<" ";
        cout << endl;
    }
    else
    {
         cout << "Case #"<<tc<<": "<<"IMPOSSIBLE\n";
    }
}
return 0;
}