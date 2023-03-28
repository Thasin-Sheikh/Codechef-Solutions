#include<bits/stdc++.h>
using namespace std;
bool check(int ans, vector<int>v)
{
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==ans)
            return true;
    }

    return false;
}
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
          cin >> str;

        long long int cnt[100];


        memset(cnt,0,sizeof(cnt));

        for(int i=0; i<str.size(); i++)
        {

            int k=str[i]-'a';


            cnt[k]++;

        }

        vector<long long int >v;
        for(int i=0; i<26; i++)
        {

            if(cnt[i]>0)
            {

                v.push_back(cnt[i]);
            }
        }

        if(v.size()<3)
        {
            cout << "Dynamic" << endl;
            continue;
        }


        sort(v.begin(),v.end());



        for(int i=2; i<v.size(); i++)
        {
            if(v[i]!=v[i-1]+v[i-2])
            {
                if(i>=3)
                    swap(v[i-3],v[i-2]);
            }
            }

        long long int  f=0;

        for(int i=2; i<v.size(); i++)
        {

            if(v[i]==(v[i-1]+v[i-2]))
            {
                continue;


            }
            else
            {
                f=1;
                break;
            }
        }

        if(f)
        {

            cout<<"Not"<<endl;
        }

        else
        {

            cout<<"Dynamic"<<endl;
        }


    }





    return 0;
}
