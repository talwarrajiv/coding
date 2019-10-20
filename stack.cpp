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
#define sz(x) ((int)(x).size())#include <bits/stdc++.h>
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
      string formula;
      cin>>formula;
      map <string,int> mp;
        stack <int> s;
        string t3,temp,t1;
        for(int i=0;i<formula.size();)
        {
             if(formula[i]=='(')
             {
                 s.push(i);
                 ++i;
             }
             else if(formula[i]==')')
             {  int val=0,tx=formula.size();
                //cout<<i<<'\n';
                for(int j=i+1;j<formula.size();j++)
                {
                    if(formula[j]>='0' && formula[j]<='9')
                    {
                        val=10*val+(formula[j]-'0');
                    }
                    else{ tx=j;
                        break;}
                }
              //cout<<val<<'\n';
                 if(val==0)
                 {
                     int x=s.top();
                     s.pop();
                     string temp = formula.substr(i+1,formula.size()-i);
                     string t1=formula.substr(0,x);
                     string t3= formula.substr(x+1,i-(x+1));
                     formula=t1+t3+temp;
                     i=t1.size()+t3.size();
                 }
                 else
                 {
                     int x=s.top();
                     s.pop();
                     //cout<<tx<<'\n';
                     string temp = formula.substr(tx,formula.size()-tx);
                     string t1=formula.substr(0,x);
                    //int te=formula[i+1]-'0';
                     //cout<<val<<'\n';
                     string t3= formula.substr(x+1,i-(x+1));
                     //cout<<t1<<" "<<temp<<'\n';
                     for(int j=0;j<val;j++)
                     {
                        t1+=t3;    
                     }
                     i=t1.size();
                     formula=t1+temp;
                 }
             }
           else
               ++i;
        }
        //cout<<formula<<'\n';
        //string temp;
        int val=0;
        for(int i=0;i<formula.size();i++)
        {  
            if(formula[i]>='A' && formula[i]<='Z')
            {
                if(temp.size()!=0)
                {
                    if(val==0)
                    {
                       mp[temp]+=1; 
                    }
                    else
                    {
                        mp[temp]+=val;
                    }
                }
                temp.clear();
                temp+=formula[i];
                val=0;
            }
            else if(formula[i]>='a' && formula[i]<='z')
            {
                temp+=formula[i];
            }
            else
            {   
                //mp[temp]+=formula[i]-'0';
                val=val*10+formula[i]-'0';
                //temp.clear();
            }
        }
        if(temp.size()!=0)
        {
            if(val==0)
                mp[temp]+=1;
            else
                mp[temp]+=val;
        }
        //cout<<count<<'\n';
        //string ans;
        int ans=0;
        unordered_map <char,int> m;
        m['C']=12;
        m['O']=16;
        m['H']=1;
        for(auto it: mp)
        {
            ans=ans+it.second*(m[it.first[0]]);
        }
        cout<<ans<<'\n';
  }



return 0;
}
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
      string formula;
      cin>>formula;
      map <string,int> mp;
        stack <int> s;
        string t3,temp,t1;
        for(int i=0;i<formula.size();)
        {
             if(formula[i]=='(')
             {
                 s.push(i);
                 ++i;
             }
             else if(formula[i]==')')
             {  int val=0,tx=formula.size();
                //cout<<i<<'\n';
                for(int j=i+1;j<formula.size();j++)
                {
                    if(formula[j]>='0' && formula[j]<='9')
                    {
                        val=10*val+(formula[j]-'0');
                    }
                    else{ tx=j;
                        break;}
                }
              //cout<<val<<'\n';
                 if(val==0)
                 {
                     int x=s.top();
                     s.pop();
                     string temp = formula.substr(i+1,formula.size()-i);
                     string t1=formula.substr(0,x);
                     string t3= formula.substr(x+1,i-(x+1));
                     formula=t1+t3+temp;
                     i=t1.size()+t3.size();
                 }
                 else
                 {
                     int x=s.top();
                     s.pop();
                     //cout<<tx<<'\n';
                     string temp = formula.substr(tx,formula.size()-tx);
                     string t1=formula.substr(0,x);
                    //int te=formula[i+1]-'0';
                     //cout<<val<<'\n';
                     string t3= formula.substr(x+1,i-(x+1));
                     //cout<<t1<<" "<<temp<<'\n';
                     for(int j=0;j<val;j++)
                     {
                        t1+=t3;    
                     }
                     i=t1.size();
                     formula=t1+temp;
                 }
             }
           else
               ++i;
        }
        //cout<<formula<<'\n';
        //string temp;
        int val=0;
        for(int i=0;i<formula.size();i++)
        {  
            if(formula[i]>='A' && formula[i]<='Z')
            {
                if(temp.size()!=0)
                {
                    if(val==0)
                    {
                       mp[temp]+=1; 
                    }
                    else
                    {
                        mp[temp]+=val;
                    }
                }
                temp.clear();
                temp+=formula[i];
                val=0;
            }
            else if(formula[i]>='a' && formula[i]<='z')
            {
                temp+=formula[i];
            }
            else
            {   
                //mp[temp]+=formula[i]-'0';
                val=val*10+formula[i]-'0';
                //temp.clear();
            }
        }
        if(temp.size()!=0)
        {
            if(val==0)
                mp[temp]+=1;
            else
                mp[temp]+=val;
        }
        //cout<<count<<'\n';
        //string ans;
        int ans=0;
        unordered_map <char,int> m;
        m['C']=12;
        m['O']=16;
        m['H']=1;
        for(auto it: mp)
        {
            ans=ans+it.second*(m[it.first[0]]);
        }
        cout<<ans<<'\n';
  }



return 0;
}
