#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three numbers:");
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("%d is larger than %d and %d",&a,&b,&c);
}
if((b>a)&&(b>c))
{
printf("%d is larger than %d and %d",&b,&c,&a);
}
if((c>a)&&(c>b))
{
printf("%d is larger than %d and %d",&c,&a,&b);
}
return 0;
}

