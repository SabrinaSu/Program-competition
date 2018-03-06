#include <iostream>

using namespace std;

struct solution{
    char a[4];
    char b[4];
    char c[4];
}f[100];
int main()
{
   int num,i,j;
    cin>> num;
    for(i=0;i<num;i++){
        cin>>f[i].a[0]>>f[i].b[0]>>f[i].c[0];
        cin>>f[i].a[1]>>f[i].b[1]>>f[i].c[1];
        cin>>f[i].a[2]>>f[i].b[2]>>f[i].c[2];
        cin>>f[i].a[3]>>f[i].b[3]>>f[i].c[3];
    }
    for(i=0;i<num;i++){
        for(j=0;j<4;j++){
            if(f[i].c[j]=='T'){
                switch(f[i].a[j]){
                case 'A':cout<<1;break;
                case 'B':cout<<2;break;
                case 'C':cout<<3;break;
                case 'D':cout<<4;break;
                default:break;
                }
                break;
            }
        }
    }
    return 0;
}
