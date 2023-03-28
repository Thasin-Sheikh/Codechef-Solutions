#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,temp_var=0,sum=0,c,b;
    int a[10]= {6,2,5,5,4,5,6,3,7,6};
    int number,cnt=0,t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>b>>c;
        number=b+c;
        while(number>=1)
        {
            temp_var=number%10;
            cnt=cnt+a[temp_var];
            number=number/10;
        }
        cout<<cnt<<endl;
        cnt=0;
    }

}
