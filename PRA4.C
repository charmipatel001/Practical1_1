#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter value of a : ");
scanf("%d",&a);
printf("enter value of b : ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("after swapping value of a:%d \n",a);
printf("after swapping value of b: %d \n",b);
getch();
}
