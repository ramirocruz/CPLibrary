#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums) {
      
      int major=nums[0],count=1;
      for(int i=1;i<nums.size();i++)
      {
          if(major==nums[i])
          {
              count++;
          }else
          {
              count--;
          }
          if(count==0)
          {
              major=nums[i];
              count=1;
          }
      }
return major;
   
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int t;
cin>>t;
while(t--)
{

    int n,k;
    cin>>n>>k;
    vector<int>ar(n);
    // vector<int>tempar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        // tempar[i] = ar[i];
    }

    int mode;
    // int median;
    // if(n&1)
    // {
    //     nth_element(tempar.begin(),tempar.begin()+n/2,tempar.end());
    //     median = tempar[n/2];
    // }
    // else
    // {
    //     nth_element(tempar.begin(),tempar.begin() + n/2,tempar.end());
    //     nth_element(tempar.begin(),tempar.begin() + (n-1)/2,tempar.end());
    //     median = (tempar[n/2] + tempar[(n-1)/2])/2;
    // }
    // mode = solve(ar);
    // cout<<mode<<endl;
    // cout<<median<<endl;
    int days=1e9+8; 
    for(mode=1;mode<= 100;mode++)
    {
    int tempdays =0;
    for(int i=0;i<n;)
    {
        while(i<n && ar[i]==mode)
        i++;
        if(i<n)
            tempdays++;
        i += k;
    }
    if(tempdays < days)
    days = tempdays;
    }
    
    cout<<days<<endl;
    
}

return 0;
}