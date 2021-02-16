#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
int count =0,max =0;
cin>>s;
for(int i=0;i<s.size();i++)
{   count =0;
   while(i<s.size() && s[i]=='R')
   {count++;
    i++;    
   }
   if(count > max)
    max =count;
}
cout<<max<<endl;

return 0;
}