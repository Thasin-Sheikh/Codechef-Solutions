
///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
ll pre[100005];
ll suf[100005];
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,q,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        for(i=1;i<=n;i++)
        {
            cin>>aarray[i];
        }
        pre[0]=0;
        suf[n+1]=0;
        for(i=1;i<=n;i++)
            pre[i]=(__gcd(pre[i-1],aarray[i]));
        for(i=n;i>=1;i--)
        {
            suf[i]=(__gcd(suf[i+1],aarray[i]));
        }
        while(q--)
        {
            cin>>l>>r;
            cout<<(__gcd(pre[l-1],suf[r+1]))<<endl;
        }
    }

    return 0;
}
