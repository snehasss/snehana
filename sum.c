#include<stdio.h>
int main()
{
int num,i,sum=0;
printf("Enter the integer value");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum=sum+i;
}
printf("sum of natural number=%d",sum);
return 0;
}
