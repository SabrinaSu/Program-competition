#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void out(char *s){
char *f=strchr(s,' ');
if(f==NULL){
    cout<<s;
}
else{
    out(f+1);
    *f='\0';
    cout<<" "<<s;
}
}

int main(){
char s[80];
gets(s);
out(s);
return 0;
}
