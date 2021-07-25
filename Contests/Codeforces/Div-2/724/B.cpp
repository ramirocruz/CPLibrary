#include <bits/stdc++.h>
using namespace std;

bool check(unordered_set<string>&st,string res,string &ans,int pos,int n)
{
    if(pos==n)
    {
        if(st.find(res) == st.end())
        {
            ans = res;
            return true;
        }
        return false;       
    }
    
    for(int i=0;i<26;i++)
    {
        res += 'a'+i;
        if(check(st,res,ans,pos+1,n))
            return true;
        res.pop_back();
    }
    return false;
}

long long fastpow(int a,int p)
{
    if(p==0 || a==1)
    return 1;
    if(p==1)
    return a;

    long long temp = fastpow(a,p/2);
    if(p&1)
    {
        return temp*temp*a;
    }
    return temp*temp;
    
}
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
while ( t-- )
{
    int n ;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    for(int l=1;l<=n;l++)
    {
        unordered_set<string>st;
        for(int i=0;i+l-1<n;i++)
        {
            st.insert(s.substr(i,l));
        }

        if(st.size() == fastpow(26,l))
        {
            continue;
        }
        else
        {
                check(st,"",ans,0,l);
                break;
        }
            

 
    }

    cout << ans << endl;
}
return 0;
}