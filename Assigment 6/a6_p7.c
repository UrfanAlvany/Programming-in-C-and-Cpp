/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
 
char set3bits(unsigned char c,int a,int b,int d)
{
    c=c | (1<<a);
    c=c | (1<<b);
    c=c | (1<<d);
    return c;
}
 
void printBit(unsigned char c)
{
    for(unsigned i=1<<7; i>0; i/=2)
    {
        (c&i)? printf("1"):printf("0");
    }
}
 
int main()
{
 
    unsigned char c;
    c = getchar();
    getchar();
    int a,b,d;
    scanf("%d %d %d",&a, &b, &d);
 
 
 
    printf("The decimal representation is: %d\n",c);
    printf("The binary representation is: ");
    printBit(c);
    printf("\n");
 
    printf("After setting the bits: ");
    unsigned char e=set3bits(c,a,b,d);
    printBit(e);
    printf("\n");
    return 0;
}
