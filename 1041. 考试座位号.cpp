#include <iostream>
#include<string.h>
#include<math.h>
#include<cstdio>
using namespace std;
struct student{
string s;
int a;
int b;
}z[1000];
int main()
{
int num,num1,i,t[1000],j;
cin>>num;
for(i=0;i<num;i++){
 cin>>z[i].s>>z[i].a>>z[i].b;
}
cin>>num1;
for(i=0;i<num1;i++){
    cin>>t[i];
}
for(i=0;i<num1;i++){
    for(j=0;j<num;j++){
        if(z[j].a==t[i])
            cout<<z[j].s<<" "<<z[j].b<<endl;
    }
}
return 0;
}
