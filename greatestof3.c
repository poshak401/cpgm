#include<stdio.h>
void main()
{
int a,b,c;
printf("enter a,b,c values\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is the greatest number\n");
else if(b>a&&b>c)
printf("b is the greatest number\n");
else
printf("c\n");
}

