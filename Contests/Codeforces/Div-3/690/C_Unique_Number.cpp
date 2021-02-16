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
unordered_map<int,int> nums;
int sum=0;
for(int i=1;i<9;i++)
{
    sum += i;
    nums[sum]=i;
}
while (t--)
{
    int x;
    cin>>x;
    if(x>45)
        cout<<-1<<endl;
    else if(x < 10)
    {
        cout<<x<<endl;
    }
    else
    {

        int min = 10;
        int key = -1;
        int val=0;
        for(auto &num:nums)
        {
            int diff = x - num.first;
            if(diff >=0 && diff < min)
            {
                min = diff;
                key = num.first;
                val = num.second;
            }
        }
    
            for(int i=1;i<=val;i++)
            {
                if(i==min)
                continue;
                cout<<i;
            }
            cout<<endl;
   
    }
    
}

return 0;
}