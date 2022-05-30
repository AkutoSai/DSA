//GCD
#include<stdio.h>
#include<conio.h>
#include<process.h>
int gcd(int m,int n)
{int rem;
while(n!=0)
{rem=m%n;
m=n; n=rem;}
return(m);}
void main()
{int num1,num2,num3,gcd1,gcd2;
clrscr();
printf("Enter three positive integers");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1==0 && num2==0 && num3==0)
{printf("\nInvalid number");
exit(0);}gcd1=gcd(num1,num2);
gcd2=gcd(num3,gcd1);
printf("\nGCD of %d %d %d is: %d\n",num1,num2,num3,gcd2);
getch();}
