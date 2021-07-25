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
    unordered_set<int>st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    int s = 0;
    // for(auto &x:st)
    //     cout << x << " ";
    // cout << endl;
    bool flag = false;
    while(true)
    {
        s = st.size();
        if(s > 300)
        {
            flag = true;
            break;
        }
        for(auto &x:st)
        {
            for(auto &y:st)
            {
                if(x==y)
                    continue;

                st.insert(abs(x - y));
            }
        }
        if(s == st.size())
            break;
    }
    if(flag)
        cout <<"NO\n";
    else
    {
        cout << "YES\n";
        cout << s << endl;
        for(auto &x:st)
            cout << x << " ";
        cout << endl;   
    }


}
return 0;
}