#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
    string S,P;
    cin>>S>>P;
    int n = S.size();
    vector<int>count(26,0);
    for(int i=0;i<n;i++)
       count[S[i] - 'a']++;
    for(int i=0;i<P.size();i++)
       count[P[i] - 'a']--;
    
    // for(auto x:count)
    // cout<<x<<" ";
    // cout<<endl;
    string ans="";bool status =true;
    for(int i=0;i<26;i++)
    {
        if(i+'a' == P[0])
        break;
        while(count[i]>0)
        {
            ans+= (char)(i+'a');
            count[i]--;
        }
    }
  string s2 ="";
  string s3 ="";
    
  
       while(count[P[0]-'a'])
       {
           s2+= P[0];
           count[P[0]-'a']--;
       }

  
    for(int i=P[0]-'a';i<26;i++)
    {
        while(count[i]>0)
        {
            s3+= (char)(i+'a');
            count[i]--;
        }

    }
    if(P<(s2+s3))
    {
        ans+=P+s2+s3;
    }
    else if(P<s3)
    {
        ans+=s2+P+s3;
    }
    else
    {
        ans+=s2+s3+P;
    }
    
    cout<<ans<<endl;
}

return 0;
}