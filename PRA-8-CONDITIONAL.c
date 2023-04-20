#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("enter age : ");
scanf("%d",&age);
(age>=18)?(printf("eligible for voting")):(printf("not eligible for voting"));

getch();
}