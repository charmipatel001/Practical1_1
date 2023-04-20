#include <stdio.h>
void main()
{

    unsigned int a = 4, b = 5, c=0;
    clrscr();
    c=a&b;
    printf("a&b value is %d \n",c);
    c=a|b;
    printf("a|b  value is %d \n",c);
    c=a^b;
    printf("a^b  value is %d \n",c);
    c=~a;
    printf("~a value is  %d\n",~c);
    c=a<<2;
    printf("a<<2 value is %d\n",c);
    c=a>>2;
    printf("a>>2 valu is %d\n",c);

    getch();

}