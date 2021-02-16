#include<bits/stdc++.h>
using namespace std;

bool comp(array<int,3> &a,array<int,3>&b)
{
    return a[0] < b [0];
} 


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int n;
cin >> n;
vector<int> A(n),B(n);
for(int i=0;i<n;i++)
    cin>>A[i];
for(int i=0;i<n;i++)
    cin>>B[i];

vector<array<int,3>> difflist(n*n);
for(int i=0,k=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        int diff = abs(A[i] - B[j]);
       difflist[k++]={diff,i,j};
    }
}
sort(difflist.begin(),difflist.end(),comp);
vector<bool>donea(n,false),doneb(n,false);

for(int i=0,left=0,right=n*n-1;i<n-1;i++)
{
    auto temp1 = difflist[left];
    while(donea[temp1[1]] || doneb[temp1[2]])
    {
        left++;
        temp1 = difflist[left];
    }
    donea[temp1[1]] = true;
    auto temp2 = difflist[right];
    while(donea[temp2[1]] || doneb[temp2[2]])
    {
        right--;
        temp2 = difflist[right];
    }
    doneb[temp2[2]] = true;

}
int alice=-1,bob=-1;
for(int i=0;i<n;i++)
{
    if(donea[i]==false)
    {
        alice = i;
        break;
    }
}
for(int i=0;i<n;i++)
{
    if(doneb[i]==false)
    {
        bob = i;
        break;
    }
}
cout<<abs(A[alice] - B[bob])<<endl;
return 0;
}