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

int n;
cin >> n;
int x;
int sum =0;
for(int i=0;i<n;i++)
{
    cin >> x ;
    if(x > 10)
    {
        sum += x-10;
    }
}
cout << sum << endl;

return 0;
}