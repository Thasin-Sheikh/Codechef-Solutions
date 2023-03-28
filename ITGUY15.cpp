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
    ll i,j,k,m,n,l,r,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    deque<char>q;
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        if(q.size()<2)
        {
            q.push_back(str[i]);
        }
        else
        {
            char a,b;
            a=q.back();
            q.pop_back();
            b=q.back();
            q.pop_back();
            if(str[i]=='c'&&a=='b'&&b=='a')
            {
                continue;
            }
            else
            {
                q.push_back(b);
                q.push_back(a);
                q.push_back(str[i]);
            }
        }
    }
    while(q.size()>0)
    {
        cout<<q.front();
        q.pop_front();
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

