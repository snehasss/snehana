#include<stdio.h>
int main()
{
long long n;
int count=0;
printf("Enter an integer");
scanf("%ll",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("number of digit:%d",count);
return 0;
}
