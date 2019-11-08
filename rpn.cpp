#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace std;
using namespace __gnu_pbds;


#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

int main() {

ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif    
  int t=1;
  //cin>>t;
  while(t--){
    string tokens;
    cin>>tokens;
    stack <int> s;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                s.push(x+y);
            }
            else if(tokens[i]=="-")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                s.push(y-x);
            }
            else if(tokens[i]=="*")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                s.push(x*y);
            }
            else if(tokens[i]=="/")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                if(x*1ll*y<0){
                    s.push(-abs(y)/abs(x));}
                else
                    s.push(y/x);
            }
            else
            {   int sw=0,val=0;
                for(int j=0;j<tokens[i].size();j++)
                {
                    if(tokens[i][j]=='-')
                        sw=1;
                    else
                    {
                        val=val*10+(tokens[i][j]-'0');
                    }
                }
               if(sw==1)
               {val=-val;}
              s.push(val);
            }
        }
        cout<<s.top();
  }



return 0;
}
