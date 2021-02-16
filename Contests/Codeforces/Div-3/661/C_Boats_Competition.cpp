#include<bits/stdc++.h>
using namespace std;
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
    int n;
    cin>>n;
    vector<int> ar(n),count(101,0);
    unordered_map<int,int> count2;
    for(int i=0;i<n;i++)
    cin>>ar[i];

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            count[ar[i]+ar[j]]++;
        }
    }
    int max =0,pos;
    for(int i=1;i<101;i++)
    {
        if(max < count[i])
        {max = count[i];
         pos =i;};
    }

   int sum = pos;
     for(int i=0;i<n;i++)
     {count2[ar[i]]++;
      }
    int steps=0;
//  cout<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<sum)
        {  
            if((count2[ar[i]] >0) &&(count2.find(sum - ar[i])!=count2.end()))
            {   
                if(count2[sum -ar[i]]>0){
            
                if(sum == ar[i]*2)
               {             
                  if(count2[ar[i]]>1)
                  {steps++;
                  count2[ar[i]] -=2;
                   continue;
                   }
                    else
                  {
                  continue;
                  }
              
                }
       
              steps++;
              count2[ar[i]]--; count2[sum - ar[i]]--;
                }
            }
        }
    }
    cout<<steps<<endl;
}

return 0;
}