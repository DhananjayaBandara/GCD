#include<iostream>
using namespace std;
int main()
{
int n,m;
int k=2;
int gcd=1;
cout<<"Enter two numbers: "<<endl;
cin>>n>>m;
while((k<=n)&&(k<=m))
{
    if((n%k==0)&&(m%k==0))
    {
        gcd=k;
    }
    k=k+1;
}
cout<<"The greatest common division of "<<n<<" and "<<m<<" is "<<gcd;
return 0;
}
