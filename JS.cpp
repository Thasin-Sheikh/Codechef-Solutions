///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
ll dp[10005][3],n;
ll jor[10005],bjor[10005];
ll fun(ll curin,ll j2)
{
    ll i,j,k,ans=maxval;
    //cout<<curin<<endl;
    if(curin>n)
    {
        return maxval;
    }
    if(curin==n)
    {
        return 0;
    }
    if(dp[curin][j2]!=-1)
    {
        return dp[curin][j2];
    }
    ll ans2=maxval;
    if(aarray[curin]%2)
    {
        ans=(1+fun(bjor[curin+1],j2));
    }
    else
    {
        ans=(1+fun(jor[curin+1],j2));
    }
    if(j2)
    {
        if(aarray[curin]%2)
        {
            ans2=(1+fun(jor[curin+1],0));
        }
        else
        {
            ans2=(1+fun(bjor[curin+1],0));
        }
    }
    return dp[curin][j2]=min(ans,ans2);
}
void solve()
{
    ll i,j,k,m,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    a=b=0;
    memset(dp,-1,sizeof(dp));
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        if(aarray[i]%2==0)
            a++;
        else b++;
    }
    if(aarray[n]%2)
    {
        bjor[n]=n;
        jor[n]=n+1;
    }
    else

    {
        jor[n]=n;
        bjor[n]=n+1;
    }
    for(i=n-1;i>=1;i--)
    {
        if(aarray[i]%2)
        {
            bjor[i]=i;
            jor[i]=jor[i+1];
        }
        else
        {
            jor[i]=i;
            bjor[i]=bjor[i+1];
        }
    }
    ans=fun(1,1);

    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
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

