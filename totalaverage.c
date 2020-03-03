#include<stdio.h>
void main()
{
int p,c,m,b,e,sum,average;
printf("enter the value of p,c,m,b,e,\n");
scanf("%d%d%d%d%d",&p,&c,&m,&b,&e);
sum=p+c+m+b+e;
printf("sum=%d",sum);
average=(sum)/5;
printf("average=%d\n",average);
}
