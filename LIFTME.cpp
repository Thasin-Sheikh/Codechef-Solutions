
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  a,b,c,t,n,m,i,j,array[100000+10],ar[100000],start,p=0,q,sum,sum1=0,cnt1=0,cnt=0,cnt2=0,cnt3=0,flag=1,ans=0,s=0,v1,v2,d,l;
    long long int st,ct,qt;
    string str,ptr;
    vector<pair<long long int,long long int>> veci;
    vector<char>vecc;
    vector<string>vecs;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        start=0,sum=0;
        cin>>n>>q;
        for(i=0; i<q; i++)
        {
            cin>>a>>b;
            if(a<=n&&b<=n)
            {
                sum=sum+(abs(start-a)+abs(b-a));
                start=b;
            }
        }
        cout<<sum<<endl;
    }



}
