#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,array[100000+10],ans=0,sum1=0,sum2=0,sum3=0,sum=0,cnt=0,cnt1,cnt2,cnt3=0,flag=0,flag1,flag2;
    int i,j,t;
    string s[100],p;
    char ch[100001];
    cin>>t;
    while(t--)
    {
        cnt1=0,cnt2=0;
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>ch[i];
            if(ch[i]>=65&&ch[i]<=90)
                cnt1++;
            else
                cnt2++;

        }
        //cout<<cnt1<<" "<<cnt2<<endl;
        if(m>=cnt1&&m>=cnt2)
            cout<<"both"<<endl;
        else if(cnt1<=m)
            cout<<"chef"<<endl;
        else if(cnt2<=m)
            cout<<"brother"<<endl;
        else
            cout<<"none"<<endl;

    }
    //cout<<cnt1<<" "<<cnt2<<endl;

}
