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
multiset<long long>mset;
int q,type;
long long x;
long long sum = 0;
cin >> q;
while(q--)
{
    cin >> type;
    if(type == 1)
    {
        cin >> x;
        mset.insert(x - sum);
    }
    else if(type == 2)
    {
        cin >> x;
        sum += x;
    }
    else
    {
        long long res = *mset.begin();
        res += sum;
        mset.erase(mset.begin());
        cout << res << endl;
    }

}

return 0;
}