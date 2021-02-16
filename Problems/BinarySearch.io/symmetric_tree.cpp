#include<bits/stdc++.h>
using namespace std;

/*
Finding wheter a tree is symmetric about vertical line
*/

  class Tree {
      public:
          int val;
          Tree *left;
          Tree *right;
 };


bool helper(Tree* node1 , Tree* node2)
    {
        if(node1==NULL && node2==NULL)
        return true;
        if(node1!=NULL && node2!=NULL)
        {
           cout<<node1->val <<' '<<node2->val<<endl;
           if(node1->val != node2->val)
           return false;
           else
           return (helper(node1->left,node2->right) && helper(node1->right,node2->left));
        }
        else
        return false;
        
    }
    bool solve(Tree* root) {
        if(root==NULL)
        return true;
        return helper(root->left,root->right);
    }


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


return 0;
}