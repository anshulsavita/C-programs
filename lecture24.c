#include<stdio.h>
void main(){
    // int h1,h2,m1,m2,s1,s2,h,m,s,d;
    // printf("Enter Time one: ");
    // scanf("%d%d%d",&h1,&m1,&s1);

    // printf("Enter Time Two: ");
    // scanf("%d%d%d",&h2,&m2,&s2);

    // h=h1+h2;
    // m=m1+m2;
    // s=s1+s2;

    // m=m+(s/60);
    // s=s%60;

    // h=h+(m/60);
    // m=m%60;

    // d=h/24;
    // h=h%24;
    

    // printf("%d days %d:%d:%d",d,h,m,s);

    // second****

    // int cm1,m1,km1,cm2,m2, km2,cm,m,km;
    // printf("Enter distance one: ");
    // scanf("%d%d%d",&km1,&m1,&cm1);

    // printf("Enter distance Two: ");
    // scanf("%d%d%d",&km2,&m2,&cm2);

    // km=km1+km2;
    // m=m1+m2;
    // cm=cm1+cm2;

    // m=m+(cm/100);
    // cm=cm%100;

    // km=km+(m/1000);
    // m=m%1000;

    // printf("%dkm %dm %dcm",km,m,cm);

    // ********Quize-> add two inches, feet, yard and miles

    int inc1,inc2,f1,f2,y1,y2,m1,m2,inc,f,y,m;
    printf("Enter Size one: ");
    scanf("%d%d%d%d",&m1,&y1,&f1,&inc1);

    printf("Enter Size two: ");
    scanf("%d%d%d%d",&m2,&y2,&f2,&inc2);

    m=m1+m2;
    y=y1+y2;
    f=f1+f2;
    inc=inc1+inc2;

    f=f+(inc/12);
    inc=inc%12;
    y=y+(f/3);
    f=f%3;
    m=m+(y/1760);
    y=y%1760;

    printf("%d %d %d %d",m,y,f,inc);

    // ******Quize-> enter cureent date, birth date tell how many years and days are you
}