#include<stdio.h>
void main(){
    double m,v,r;
    freopen("input.txt","r",stdin);
    scanf("%lf %lf %lf", &m,&v,&r);
    double mil;
    mil=m/v;
    if(r>mil){printf("%.2lf UP",mil);}
    if(r==mil){printf("%.2lf STOP",mil);}
    if(r<mil){printf("%.2lf down",mil);}


}
