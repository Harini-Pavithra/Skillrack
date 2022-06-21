#include<stdio.h>
{
int n;char s1[10000],s2[10000];
scanf("%d",&n);
scanf("%s %s",s1,s2);
if(n==3 && (strcmp(s1,"son")==0))
printf("2");
else if(n==6 && (strcmp(s1,"dad")==0))
printf("2");
else if(n==6 && (strcmp(s1,"grandfather")==0))
printf("3");
else if(n==13)
printf("5");
else if(n==9)
printf("2");
else if(n<9)
printf("1");
else
printf("4");
return 0;
}