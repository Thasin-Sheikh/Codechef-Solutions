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
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
ll power(ll a,ll n,ll m)
{
    ll res=1;
    while(n)
    {
        if(n%2==1)
        {
            res=((res%m)*(a%m))%m;
            n--;
        }
        else
        {
            a=((a%m)*(a%m))%m;
            n/=2;

        }
    }
    return res;
}
ll gcd(ll a,ll b,ll n)
{
    if(a==b)
    {
        return (power(a,n,MOD)+power(b,n,MOD))%MOD;
    }
    ll num=a-b;
    ll cur=1;
    for(ll i=1;i*i<=num;i++)
    {
        if(num%i==0)
        {
            ll tmp=(power(a,n,i)+power(b,n,i))%i;
            if(tmp==0)
            {
                cur=max(cur,i);
            }
            tmp=(power(a,n,num/i)+power(b,n,num/i))%(num/i);
            if(tmp==0)
            {
                cur=max(cur,num/i);
            }
        }
    }
    return cur%MOD;

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
       cout<< gcd(a,b,n)<<endl;
    }

    return 0;
}


