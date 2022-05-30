//Binomial Coefficient

#include<stdio.h>
#include<conio.h>

int binomialCoeff(int n, int k)
{
    if(k == 0)return 1;
    if(n <= k) return 0;

    return (n*binomialCoeff(n-1,k-1))/k;
}

void main()
{
    int k;
	clrscr();
    for(k=10;k>=0;k-=1)
    {
          printf("%d\n", binomialCoeff(10, k));
    }
  getch();
}  