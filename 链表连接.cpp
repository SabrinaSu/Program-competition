#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

typedef struct link{
int num;
struct link *next;
};

link*creat(){
    int num1;
link *s,*r,*head;
head=(link*)malloc(sizeof(link));
head->next=NULL;
r=head;
while(cin>>num1){
    if(num1==-1)break;
    s=(link*)malloc(sizeof(link));
    s->num=num1;s->next=r->next;
    r->next=s;
    r=s;
}
return head;
}

void out(link *L){
     link *p;
      p=L->next;
    while(p){
        cout<<p->num<<" ";
        p=p->next;
    }
}

link *connect(link *x,link *y){
link *px,*py,*pz,*L;
px=x->next;py=y->next;
L=pz=x;
while(px&&py){
    if(px->num<=py->num){
        pz->next=px;pz=px;px=px->next;
    }
    else{
        pz->next=py;pz=py;py=py->next;
    }
}
pz->next=px?px:py;
return L;
}
int main(){
   link *a,*b,*t;
   a=creat();
   b=creat();
   t=connect(a,b);
   out(t);
  return 0;
}
