#include<bits/stdc++.h>
using namespace std;

/*
Find the majority element in the array
In first loop we find the candidate for the majority.
We decide majority by counting any element and decrementing it if other element 
is encountered. 
the whole idea is if our majority element is more than n/2 then it will survive
being decremented by all the rest elements count.
Once we find a candidate we will again count in total for that element to actually
find its count.

major=1;count=1;

1      2       3        4
    count--  count-- count--
    major=2  major=3 major=4
    count=1  count=1 count=1

here we see that last major is 4 but it is not majority
That is why we check again
*/
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
      count=0;
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]==major)
          count++;
      }
      if(count > nums.size()/2)
      return major;
      return -1;
   
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


return 0;
}