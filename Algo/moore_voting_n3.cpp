#include<bits/stdc++.h>
using namespace std;
/*
If we want the elements more than n/3
we can use two major variables and count alternatively.
*/

    vector<int> majorityElement(vector<int>& nums) {
        int major1=INT_MAX,major2=INT_MAX,count1=0,count2=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==major1)
                count1++;
            else if(nums[i]==major2)
                count2++;
            else if(count1==0)
               {
                  major1=nums[i];
                  count1=1;
               }
            else if(count2==0)
            {
                major2=nums[i];
                count2=1;
            }
            else
            { count1--;count2--; }
            
           
        }
       count1=0;count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(major1==nums[i])
                count1++;
            else if(major2==nums[i])
                count2++;
        }


        if(count1 > nums.size()/3)
         ans.push_back(major1);


        if(count2 > nums.size()/3)
         ans.push_back(major2);

         
        sort(ans.begin(),ans.end());
        return ans;
    }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);



return 0;
}