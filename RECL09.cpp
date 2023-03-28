///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
ll aarray[100000+10];
ll magic[501][501];
ll ar[200000+10];
ll vi[40000+10];
ll  a,b;
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,n,k,m5,l,m,r,ta,t,ans,flag,g,nmpo=INT_MAX,hariken=INT_MAX;
    ll w1,w2,w3,w4,w5;
    bool primes[1000007];
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    set<ll>sl;
    for(i=2; i<=100001; i++)
    {
        if(primes[i])
        {
            for(j=i; i*j<=1000001; j++)
            {
                primes[i*j]=false;
            }
        }
    }
    cin>>n;
    if(primes[n])
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}