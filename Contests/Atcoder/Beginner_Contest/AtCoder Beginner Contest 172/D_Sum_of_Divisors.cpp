#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 //freopen("input.txt", "r", stdin); 
 //freopen("output.txt", "w", stdout); 
 int n;
 long long sum =0;
 cin>>n;

 /*
 ..................
 This general solution to find the factors of num can be interchanged
 since both inner and outer loop are independent.
 ......................
 ### General Sol:
 for(int num=1;num<=n;num++)
 {
     for(int den=1;den <=n;den++)
     {
         if(num%den == 0)
         {
             sum += num;
         }
     }
 }

 #### Interchanging inner and outer loop:-

 for(int den=1;den<=n;den++)
 {
     for(int num=1;num <=n;num++)
     {
         if(num%den == 0)
         {
             sum += num;           //The result will be same but we can now interpret the 
                                   //question differently.
         }
     }
 }

 #### we are finding for every 'den' its multiples and the sum of it.
 thus g(x) = sum of multiples of x can be found easily using AP.

 and we have to find  sum of g(1 -> N)
 .......................
*/

for(long long i=1;i<=n;i++)
{
    long long y = floor(n/i); // highest multiple of i <= n
    sum +=  (i*y*(y+1))/2;
}


 cout<<sum<<endl;

return 0;
}