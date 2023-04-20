#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,x,y,z;
clrscr();
printf("enter value a: ");
scanf("%d",&a);
printf("enter value b: ");
scanf("%d",&b);
printf("enter value c: ");
scanf("%d",&c);
x=a++;
y=b++;
z=c++;
printf("the orignal value is x %d \n",x);
printf("the orignal value is y %d \n",y);
printf("the orignal value is z %d \n",z);
printf("the update value is a %d \n",a);
printf("the update value is b %d \n",b);
printf("the update value is c %d \n",c);
getch();
}
