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
int n , x;
cin >> n >> x;
int sum = n/2;
sum = -sum;
int temp;
for(int i=0;i<n;i++)
{
    cin >> temp;
    sum += temp;
}
if(sum <= x)
    cout << "Yes\n";
else
    cout << "No\n";

return 0;
}