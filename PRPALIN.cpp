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
bool primes[10000007];
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,n,k,m5,l,m,r,ta,t,flag,g,nmpo=INT_MAX,hariken=INT_MAX;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi;
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    set<ll>sl;
    ll pos=0;
    for(i=2; i<=1000001; i++)
    {
        if(primes[i])
        {
            for(j=i*i; j<=10000001; j+=i)
                primes[j]=false;
        }
    }

    cin>>n;
    while(1)
    {
        ostringstream ss;
        ss<<n;
        str=ss.str();
        ptr=str;
        reverse(ptr.begin(),ptr.end());
        if(primes[n]&&str==ptr)
        {
            cout<<n<<endl;
            return 0;
        }
        else n++;
    }





}