#include<bits/stdc++.h>
using namespace std;



void BuildStree(vector<int>&ar,vector<int>&stree,int start,int end,int node)
{
    if(start == end)
    {
        stree[node]=ar[start];
        return ;
    }
    int mid = (start+end)/2,left = 2*node+1;
    int right = left+1;


    BuildStree(ar,stree,start,mid,left);
    BuildStree(ar,stree,mid+1,end,right);


    stree[node] = stree[left] + stree[right];
}

void UpdateStree(vector<int>&ar,vector<int>&stree,int start,int end,int node,int key,int val)
{

    if(start == end)
    {
        ar[key]=val;
        stree[node]=val;
        return;
    }
    int mid=(start+end)/2;
    int left = 2*node+1;
    int right=left+1;
    if(key > mid)
    {
        UpdateStree(ar,stree,mid+1,end,right,key,val);
    }
    else
    {
        UpdateStree(ar,stree,start,mid,left,key,val);
    }
    
    stree[node] = stree[left] + stree[right];
}
int Query(vector<int>&stree,int start,int end,int node,int l,int r)
{
    if(l>end || r < start)
    {
        return 0;
    }
    if(l<= start && r>=end)
    {
        return stree[node];
    }

    int mid=(start+end)/2;
    int left = 2*node+1;
    int right = left+1;
    int ans1 = Query(stree,start,mid,left,l,r);
    int ans2 = Query(stree,mid+1,end,right,l,r);

    return ans1+ans2;
}


void BFS(vector<int>&stree)
{
   queue<int>q;
   q.push(0);
   q.push(-1);
   while(!q.empty())
   {
       while(q.front()!=-1)
       {
       int node = q.front();
       q.pop();
       int left=2*node+1;
       int right =left+1;
       if(left<stree.size())
       q.push(left);
       if(right<stree.size())
       q.push(right);

       cout<<stree[node]<<" ";
       }
       q.push(-1);
       q.pop();
       if(q.front()==-1)
       q.pop();
       
       cout<<endl;

   }

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>ar(n);
for(int i=0;i<n;i++)
cin>>ar[i];

vector<int>stree(4*n);
BuildStree(ar,stree,0,n-1,0);
BFS(stree);
UpdateStree(ar,stree,0,n-1,0,4,7);
BFS(stree);
while(10)
{
int l,r;
cin>>l>>r;
cout<<Query(stree,0,n-1,0,l,r)<<endl;
}
return 0;
}