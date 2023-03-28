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
const long N = 1e5 + 10;
ll aarray[1000000];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ans;
        r=0;
        for(i=0; i<n; i++)
        {
            cin>>aarray[i];
            r=max(r,aarray[i]);
        }
        ll cnt[r+10]={0};
        for(i=0;i<n;i++)
        {
            cnt[aarray[i]]++;
        }
        for(i=1;i<=r+1;i++)
        {
            if(cnt[i]%2)
            {
                cout<<i<<"\n";
                break;
            }
        }
    }

    return 0;
}

