#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

struct solution{
    char a[4];
    char b[4];
    char c[4];
}f[100];
int main()
{
    double r1,p1,r2,p2,r3,p3,a,b;
cin>>r1>>p1>>r2>>p2;
r3=r1*r2;
p3=p1+p2;
a=r3*cos(p3);
b=r3*sin(p3);
if(a>-0.005&&a<0) a=0.00;
if(b>-0.005&&b<0) b=0.00;
if(sin(p3)<0&&b<0)
 cout<<setiosflags(ios::fixed)<<setprecision(2)<<a<<setiosflags(ios::fixed)<<setprecision(2)<<b<<'i';
else
 cout<<setiosflags(ios::fixed)<<setprecision(2)<<a<<'+'<<setiosflags(ios::fixed)<<setprecision(2)<<b<<'i';
return 0;
}
