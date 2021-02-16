#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
string S,T;
cin>>S;
cin>>T;
int i=0,j=0;
int count =0;
while(i<S.size())
{   
    cout<<"Start\n";
    cout<<i<<" : "<<j<<endl;
    while(i<S.size() && S[i]!=T[0])
    {
        i++;
    }
    i--;
    int pos=i;
    cout<<pos<<" : pos"<<endl;
    int sum=0;
    while(i<S.size() && j<T.size() && S[i]==T[j])
    {   
        sum++;
        i++;
        j++;

    }
    cout<<sum<<" sum : "<<count<<" count"<<endl;
    if(sum > count)
     count=sum;
     cout<<count<<" --count"<<endl;
    if(count == T.size())
      break;
    i = pos+1;
    j=0;
     cout<<i<<" : "<<j<<endl;
     cout<<"End\n";
}
cout<<T.size()-count<<endl;

return 0;
}