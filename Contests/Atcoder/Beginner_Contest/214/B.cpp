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
int s,t;
cin >> s >> t;

int count = 0;
for(int i=0;i<=s;i++)
{
    for(int j=0;j<=s;j++)
    {
        for(int k =0;k<=s;k++)
        {
            if((i+j+k <= s) && ((i*j*k) <= t))
                count++;
        }
    }
}

cout << count << endl;
return 0;
}