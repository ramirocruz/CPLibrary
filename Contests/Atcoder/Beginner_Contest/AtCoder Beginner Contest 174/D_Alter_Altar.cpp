#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int swaps =0;
int N;
cin>>N;
string C;
cin>>C;

int left =0,right =N-1;
while(left < right)
{
    while((left < N) && (C[left]< 'T'))
     left++;
    while((right > -1) && (C[right]>'T'))
     right--;
    if(left < right)
    {
        int temp = C[left];
        C[left] = C[right];
        C[right] = temp;
        swaps++;
    }
}

cout<<swaps<<endl;
return 0;
}