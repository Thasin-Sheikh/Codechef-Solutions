///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
ll ans[10000007];
ll aar[80000000];
bool primes[10000001];
void seive()
{
    ll i,j;
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    for(i=2;i*i<=10000001;i++)
    {
        if(primes[i])
        {
            ans[i]=1;
            for(j=i*i;j<=10000000;j+=i)
                primes[j]=false;
        }
    }
    ans[0]=ans[1]=0;
    for(i=2;i<=10000000;i++)
    {
        ans[i]=ans[i-1];
        if(primes[i])
            ans[i]++;
    }
}
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,n,k,m5,l,m,r,ta,t,flag,g,nmpo=INT_MAX,hariken=INT_MAX;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi;
    cin>>t;
    seive();
    while(t--)
    {
        cin>>n>>m;
        cout<<ans[m]-ans[n-1]<<endl;
    }


}