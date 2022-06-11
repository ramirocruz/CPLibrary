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
while(t--)
{
    int x,y;
    cin >> x >> y;
    if(y == x)
        cout << 0 << endl;
    else if(y < x)
        cout << x - y << endl;
    else
        {
            if((y - x)%2 == 0)
                cout << (y - x)/2 << endl;
            else
                cout << (y - x + 1)/2 + 1 << endl;
        }
}
return 0;
}