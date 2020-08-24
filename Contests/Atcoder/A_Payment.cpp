#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 //freopen("input.txt", "r", stdin); 
 //freopen("output.txt", "w", stdout); 
int n;
cin>>n;
cout<<(1000 - n%1000)%1000<<endl;
return 0;
}