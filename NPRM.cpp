///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
ll aarray[100000+10];
ll magic[501][501];
ll ar[200000+10];
ll vi[40000+10];
ll  a,b;
vector<ll>pr;
void seive(vector<ll>&primes)
{
    bool prime[1000010];
    ll i,j;
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(i=2;i*i<1000010;i++)
    {
        if(prime[i])
        {
            for( j=i*i;j<1000010;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(i=2;i<1000010;i++)
    {
        if(prime[i])
            primes.push_back(i);
    }
}
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,n,k,m5,l,m,r,ta,t,ans,flag,g,nmpo=INT_MAX,hariken=INT_MAX;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi;
    bool primes[1000007];
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    set<ll>sl;
    ll pos=0;
    seive(dvi);
    cin>>t;
    while(t--)
    {
        cin>>n;
        auto it=find(dvi.begin(),dvi.end(),n);
        if(it!=dvi.end())
        {
            cout<<distance(dvi.begin(),it)+1<<endl;
        }
        else cout<<-1<<endl;
    }


}