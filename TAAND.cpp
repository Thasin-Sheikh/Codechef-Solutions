///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[300000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
ll flag[300000+10];
ll n;
ll solve()
{
    ll i,j,ans=0,c,m,k;
    memset(flag,0,sizeof(flag));
    for(i=30; i>=0; i--)
    {
        c=0;
        for(j=1; j<=n; j++)
        {
            if((aarray[j]&(1<<i)))
            {
                c++;
            }
        }
        //cout<<c<<endl;
        if(c>=2)
        {
            ans+=(1<<i);
            for(j=1; j<=n; j++)
            {
                if((aarray[j]&(1<<i))==0)
                    aarray[j]=0;
            }
        }
        //cout<<ans<<" ";
    }
    cout<<ans<<endl;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    /*cin>>f;
    bitset<32>binary(f);
    cout<<binary<<endl;*/
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    solve();
    return 0;
}

