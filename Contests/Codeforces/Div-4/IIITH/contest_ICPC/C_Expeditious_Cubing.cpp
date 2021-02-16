#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
 
float ar[4];
float ans;
cin>>ar[0]>>ar[1]>>ar[2]>>ar[3];
cin>>ans;
sort(ar,ar+4);
 
float temp = ar[1]+ar[2];
float res = 3*ans - temp;
if(int(10000*res) < int(ar[0]*10000))
cout<<"impossible\n";
else if(int(10000*res) >= int(10000*ar[3]))
cout<<"infinite\n";
else
{
    printf("%0.2f\n",res);
}
 
 
return 0;
}