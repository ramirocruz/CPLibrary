#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int T;
cin>>T;
while(T--)
{ 
    int N,K;
    string S;
    cin>>N>>K;
    cin>>S;
    int one =0,zero =0;
    for(char c:S)
    {
        if(c == '0')
        zero++;
        else
        {
         one++;
        }
        
    }
    int n = N/K;
    if((one%n != 0) || (zero%n != 0))
      cout<<"IMPOSSIBLE\n";
    else
    {   

        string base = "";
        for(int i=0;i<(zero/n);i++)
        base+='0';
        for(int i=0;i<(one/n);i++)
        base+='1';
        string base2 = base;
        reverse(base2.begin(),base2.end());
        string ans ="";
        // cout<<base<<" -- "<<base2<<" -- "<<one<<" : "<<zero<<" : "<<n<<endl;
        for(int i=0;i<n;i++)
        {
            if(i&1)
            ans+=base2;
            else
            {
                ans+=base;
            }
            
        }
        cout<<ans<<endl;
    }
    
}

return 0;
}