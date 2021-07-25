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

    string s;
    cin >> s;

    vector<long long >ch(8);
    int MOD = 1e9 + 7;
    unordered_map<char,int>mp;
    mp['c'] = 0;
    mp['h'] = 1;
    mp['o'] = 2;
    mp['k'] = 3;
    mp['u'] = 4;
    mp['d'] = 5;
    mp['a'] = 6;
    mp['i'] = 7;

    for(auto &c:s)
    {
        if(mp.count(c) == 0)
            continue;

        if(c=='c')
            ch[0]++;
        else
        {
            int pos = mp[c];
            ch[pos] = (ch[pos] + ch[pos - 1])%MOD;
        }
    }
    cout <<ch[7] << endl;
    return 0;
    }