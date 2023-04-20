#include<stdio.h>
#include<conio.h>
void main()
{
   float fahrenheit, celsius;
   clrscr();
   printf("Enter Fahrenheit: \n");
   scanf("%f",&fahrenheit);
   celsius = (fahrenheit - 32)*5/9;
   printf("Celsius: %f \n", celsius);
   getch();

}