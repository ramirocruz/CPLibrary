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
    int n;
    cin >> n;
    
    int rem = n%3;
    int h1,h2,h3;
    h1 = n/3 - 1 + 2;
    h2 = n/3 - 1 + 1;
    h3 = n/3 - 1;

    if(rem == 0)
    {
        cout << h2 <<" "<<h1<<" "<<h3<<endl;
    }
    else if(rem == 1)
    {
        cout << h2 <<" "<<h1+1<<" "<<h3<<endl;
    }
    else
    {
        cout << h2+1<<" "<<h1+1<<" "<<h3<<endl;
    }

}
return 0;
}