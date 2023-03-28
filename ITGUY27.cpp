///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll prime(ll n)
{
    ll i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll i,j,n,m,l,k;
    cin>>n>>k;
    if(n<2*k)
    {
        cout<<0<<"\n";
        return ;
    }
    if(k==1)
    {
        if(prime(n))
        {
            cout<<1<<"\n";
        }
        else cout<<0<<"\n";
        return ;
    }
    if(k==2)
    {
        if(n%2==0)
        {
            cout<<1<<"\n";
            return ;
        }
        if(prime(n-2))
        {
            cout<<1<<"\n";
        }
        else cout<<0<<"\n";
        return ;
    }
    cout<<1<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
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
