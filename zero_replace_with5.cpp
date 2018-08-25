#include<iostream>
using namespace std;
int main()
{
int r=0,p=1,i,t,n;
cin>>t;
for(i=1;i<=t;i++)
{
cin>>n;
r=0;p=1;
for(;n>0;)
{
if(n%10==0)
{
r=r+5*p;
p=p*10;
}
else
{
r=r+(n%10)*p;
p=p*10;
}
n=n/10;
}
 cout<<r<<endl;
}}


