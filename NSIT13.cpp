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
    string str;
    string pptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,sum[200000+10],i,m,n,A=0,B,C,D,E,cst,c,cd,d,j,k,x0,t;
    n=10,x0=10;
    while(n--)
    {
        set<ll>v;
        for(i=1;i<=10;i++)
        {
            cin>>a;
            B=a%42;
            v.insert(B);
        }
        cout<<v.size()<<endl;



    }


}