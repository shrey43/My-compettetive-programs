#include<iostream>
#include<string.h>
using namespace std;
typedef long long ll;
ll toconvertInt(string a,ll M)

{
ll res=0;
for(int i=0;i<a.size();i++)
{
res=(res*10)%M+(a[i]-'0');
res=res%M;
}
return res;
}
ll power(ll b, ll p,ll M)
{
ll smallpower;
if(p==1)
{
return b;
}
if(p==0)
{
return 1;
}
if(p%2==0)
{
smallpower=power((b*b)%M,p/2,M);
return smallpower%M;
}
else
{
smallpower=(power((b*b)%M,p/2,M)*b)%M;
return smallpower%M;

}





}
int main()
{
int n;
cin>>n;
while(n)
{
string s;
string b;
cin>>s;
cin>>b;
ll c;
ll e;
unsigned long long  M=1000000007;
c=toconvertInt(s,M);
e=toconvertInt(b,M-1);
ll f;
f=power(c,e,M);
cout<<f<<"\n";
--n;
}
}
