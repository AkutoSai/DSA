#include<stdio.h>
#include<conio.h>
int a[5];
int linear(int num,int position) //function definition
{
if(num==a[position])
{
return position;
}
else
{
position++;
return linear(num,position);
}
}
void main()
{
int i,n,ans;
clrscr();
printf("Enter 5 numbers\n");
for(i=0;i<=4;i++)
{
scanf("%d", &a[i]);
}
printf("\nEnter the number to be searched\n");
scanf("%d",&n);
ans=linear(n,0); //function call
if(ans<=4)
{
printf("Number (%d) found at position (%d)",n,ans+1);
}
else
{
printf("Didnot find the number (%d)",n);
}
getch();
}