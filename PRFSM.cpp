///*Bismillahir Rahmanir Rahim***///
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
bool fk[1000001];
int main()
{
    makefast__
    int n,t,i,cnt,d,b,flag,j=0,money,days,a,ar[100000+100],p[100000];
    vector<ll>s,vec;
    ll a1,a2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ll sum[100000+10];
        memset(sum,0,sizeof(sum));
        for(i=1; i<=n; i++)
        {
            scanf("%d",&aarray[i]);
            sum[i]=sum[i-1]+aarray[i];
        }
        int q;
        scanf("%d",&q);
        while(q--)
        {
            scanf("%d%d",&a,&b);
            ll stayhome=sum[b]-sum[a-1];
            printf("%ld\n",stayhome);
        }

    }


}