#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 //freopen("input.txt", "r", stdin); 
 //freopen("output.txt", "w", stdout); 

string S,T;
cin>>S;
cin>>T;
int count=0;
for(int i=0;i<S.length();i++)
{
    if(S[i] != T[i])
    count++;
}
cout<<count<<endl;

return 0;
}