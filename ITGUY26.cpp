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
ll aarray[50];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,m,n,k,l,r,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    m=n;
    sum=0;
    if(n==0)
    {
        cout<<0<<"\n";
        return ;
    }
    while(n)
    {
        k=n%10;
        sum+=aarray[k];
        n/=10;
    }
    if(sum==m)
    {
        cout<<1<<"\n";
    }
    else cout<<0<<"\n";
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
    aarray[0]=1;
    for(i=1; i<=9; i++)
    {
        aarray[i]=i*aarray[i-1];
    }
    while(t--)
    {
        solve();
    }

    return 0;
}
