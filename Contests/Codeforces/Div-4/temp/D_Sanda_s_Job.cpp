#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

long long a,s;
cin>>a>>s;
long long res = s - a;
bool flag = false;
string A,B,R;
A = to_string(a);
// B = to_string(s);
R = to_string(res);
if (R.size() != A.size() || res < 0)
    cout<<"NO\n";
else
    {
        unordered_map<int,int> count1,count2;
        for(int i=0;i<A.size();i++)
            count1[A[i]]++;
        for(int i=0;i<R.size();i++)
            count2[R[i]]++;
        
        for(int i='0' ; i <= '9';i++ )
        {
            if(count1[i] != count2[i])
               { flag = true;
               break;}
        }
        if(flag)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
return 0;
}