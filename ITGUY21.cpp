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
void solve()
{
    ll i,j,m,n,k,l,r,ans,sum=0;
    vector<string >str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    if(n==1)
    {
        cout<<0<<"\n";
        return ;
    }
    if(n==2)
    {
        cout<<0<<"\n";
        cout<<"01"<<"\n";
        return ;
    }
    string s,p;
    s="01";
    ll a=0,b=1;
    cout<<0<<endl;
    cout<<"01"<<endl;
    for(i=3; i<=n; i++)
    {
        cout<<s;
        cout<<a+b<<endl;
        ll c=a+b;
        p=to_string(c);
        s+=p;
        ll d=b;
        b=a+b;
        a=d;
    }
    cout<<"\n";
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

