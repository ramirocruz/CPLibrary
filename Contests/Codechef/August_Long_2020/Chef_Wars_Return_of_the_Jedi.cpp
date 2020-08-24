#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while (t--)
{
    long long p,h;
   cin>>h>>p;

   while(p>0)
   {   
  
       h -= p;
       p/=2;
   }

   if(h<=0)
   cout<<"1\n";
   else
   {
       cout<<"0\n";
   }
   
   
}


return 0;
}