#include <iostream>
#include<string.h>
#include<math.h>
#include<cstdio>
using namespace std;
struct student{
int a;
int b;
int c=0;
}z[2];
int main()
{
    int num,sum;
cin>>num;
while(num--){
    cin>>z[0].a>>z[0].b>>z[1].a>>z[1].b;
    sum=z[0].a+z[1].a;
    if(z[1].b==sum&&z[0].b!=sum)
        z[0].c++;
    if(z[0].b==sum&&z[1].b!=sum)
        z[1].c++;
}
cout<<z[0].c<<" "<<z[1].c;
return 0;
}
