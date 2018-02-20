#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    int i,j,a,b[5];
 for(i=0;i<32;i++){
    memset(b,0,sizeof(b));
        a=i;
   for(j=0;a>=1&&j<5;j++){
        b[j]=a%2;
    a=a/2;
   }
for(j=4;j>=0;j--)
    cout<<b[j];
 cout<<endl;
 memset(b,0,sizeof(b));
 }
 return 0;
}
