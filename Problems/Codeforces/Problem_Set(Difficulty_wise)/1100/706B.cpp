#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin >> n;
vector<int>s(n);
for(int i=0;i<n;i++)
    cin >> s[i];
int q;
cin >> q;
sort(s.begin(),s.end());

while(q--)
{
    int x;
    cin >> x;
    int lo = 1 , hi = n ;
    int ans = 0 ;
    while(lo <= hi){
        int mid = lo + hi >> 1 ;
        if(s[mid - 1] <= x){
            ans = mid ;
            lo = mid + 1 ;
        } else {
            hi = mid - 1 ;
        }
    }
    cout << ans << endl ;

}

return 0;
}