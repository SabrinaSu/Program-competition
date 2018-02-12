#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[1000],num,i,j,t=0;
cin>>num;
for(i=0;i<num;i++)
    cin>>a[i];
sort(a,a+num);
for(i=0;i<num-t;i++){
    if(a[i]==a[i+1]){
        for(j=i;j<num;j++){
            a[j]=a[j+1];
        }
        t++;
       }
}
num-=t;
cout<<num<<endl;
cout<<a[0];
for(i=1;i<num;i++)
    cout<<" "<<a[i];
    cout<<endl;
return 0;
}
