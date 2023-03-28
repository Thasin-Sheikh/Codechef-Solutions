///*Bismillahir Rahmanir Rahim***///
///**Author thasin_sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using myset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long maxn=5e5+10;
const long long  maxval=1e18;
const long long minval=-1e18;
typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
//int dx[] = {-1 , 0 , 1 , 0};
//int dy[] = {0 , 1 , 0 , -1};
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
ll vis[N];
vector<ll>st[60+5];
vector<ll>nst[60+5];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    ll qt;
    cin>>n>>qt;
    for(i=0; i<=60; i++)
    {
        st[i].clear();
        nst[i].clear();
    }
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];

        for(j=0; j<60; j++)
        {
            k=(1LL<<j)&aarray[i];
            if(k)
            {
                st[j].push_back(i);
            }
            else
            {
                nst[j].push_back(i);
            }

        }
    }
    ll l1,r1,l2,r2,pu, qu, p1,q1,p1u,q1u;
    while(qt--)
    {
        cin>>k>>l1>>r1>>l2>>r2;
        ans=0;
        p=lower_bound(st[k].begin(),st[k].end(),l1)-st[k].begin();//set bit l1-r1
        p1=lower_bound(nst[k].begin(),nst[k].end(),l2)-nst[k].begin();//unset bit l2-r2
        ll l1set=0,l2notset=0;
        //cout<<p<<" "<<p1<<"\n";
        if(p!=st[k].size())
        {
            pu=lower_bound(st[k].begin(),st[k].end(),r1)-st[k].begin();
            if(pu!=st[k].size())
            {
                if(st[k][pu]>r1)
                {
                    pu--;
                }
            }
            else
            {
                pu--;
            }
            l1set=pu-p+1;
        }
        if(p1!=nst[k].size())
        {
            p1u=lower_bound(nst[k].begin(),nst[k].end(),r2)-nst[k].begin();// unset l2-r2
            if(p1u!=nst[k].size())
            {
                if(nst[k][p1u]>r2)
                {
                    p1u--;
                }
            }
            else
            {
                p1u--;
            }
            //cout<<p1u<<" "<<p1<<"\n";
            l2notset=p1u-p1+1;
            // cout<<l1set<<" "<<l2notset<<"\n";
            ans+=l1set*l2notset;
        }
        //cout<<ans<<" ";

        p=r1-l1+1;
        p-=l1set;
        q=r2-l2+1;
        q-=l2notset;
        p=max(p,0LL);
        q=max(q,0LL);
        ans+=p*q;
        cout<<ans<<"\n";
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
    //add and subtract

    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}




