#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,s,z,area;
printf("enter the value of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
z=(s*(s-a)*(s-b)*(s-c));
area=sqrt(z);
printf("s=%d\n",s);
printf("z=%d\n",z);
printf("area=%d\n",area);
}

