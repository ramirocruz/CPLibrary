/*
editorial:

After all, the only choice you can make is how many books to read from desk A and B. Let
a0 = 0, a1 = A1, a2 = A1 + A2, a3 = A1 + A2 + A3, . . . , aN = A1 + · · · + AN . We also define
b0, b1, . . . , bM similarly. When calculating those value in programs, we calculating in the way
like a1 = a0 + A1, a2 = a1 + A2, a3 = a2 + A3, . . . (if you sum up from A1 every time, it will
exceed time limit). Then, considering reading i books from desk A and j books from desk B,
the problem can be rephrased as follows:
✓ ✏
For integers i, j (0 ≤ i ≤ N, 0 ≤ j ≤ M) such that ai + bj ≤ K, find the maximum possible
value of i + j. ✒ ✑
If N and M are fairly small, we can solve this problem by trying all possible (N + 1)×(N + 1)
combinations of (i, j) = (0, 0),(0, 1), . . . ,(0, M),(1, 0), . . . ,(N, M) However, when N = M =
200000, we need at least tens of seconds of execution time, which will exceed the time limit.
Then, let us try exhaustive search for only i = 0, 1, . . . , N, and for each i, find the maximum
choosable j, that is, maximum j such that bj ≤ K − ai
.
First, let us find the maximum choosable j when i = 0. This can be found as the first j such
that bj ≤ K − a0 when scanning in the order of j = M, M − 1, . . .. Let such j be best0.
Next, we will find the maximum choosable j when i = 1. Since the time needed to read a
book is positive (therefore a and b are both monotonic increasing sequence), the maximum value
no more than best0. Therefore, you don’t have to start scanning in the decreasing order from
j = M; instead, you can start it from j = best0.
By continuing calculation until i = N in the similar way (stopping when ai > K though), you
can dramatically decrease the execution time. In the sample code on the next page (although
it is written in Python, the cardinal part of line 11 to 18 is readable as pseudocode), the while
loop on line 15 and 16 is at most executed M times, so the total time complexity is O(N + M).
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 //freopen("input.txt", "r", stdin); 
 //freopen("output.txt", "w", stdout); 


int n,m,k,A[200000],B[200000];
long long a[200001],b[200001];
cin>>n>>m>>k;
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
for(int i=0;i<m;i++){
    cin>>B[i];

}
a[0]=b[0]=0;
for(int i=1;i<=n;i++)
{
    a[i] = a[i-1] + A[i-1];
}

for(int i=1;i<=m;i++)
{
    b[i] = b[i-1] + B[i-1];
}
int jbest = m,max = -1;
for(int i=0;(i<=n && a[i]<=k);i++)
{
    
    for(int j=jbest;j>-1;j--)
    {
        if((a[i]+b[j]) <= k)
         {
             jbest = j;
             if((i+j) > max)
              max = i+j;
             break;
         }
    }
}

cout<<max<<endl;
return 0;
}