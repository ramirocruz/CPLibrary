#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n;
cin>>n;
vector<int> ar(n);
for(int i=0;i<n;i++)
    cin>>ar[i];
int left=0,right=n-1;

   while(left < right && ar[left] <= ar[left+1])
        left++; 
   while(right > left && ar[right] <= ar[right-1])
        right--;
    int res = n-right + left + 1;
    if(left == right)
    res = n;

    cout<<res<<endl;

return 0;
}