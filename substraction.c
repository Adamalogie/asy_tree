#include<stdio.h>

int substract(int a, int b);
int main (void)
{
    int a= get_int("a: ");
    int b= get_int("b: ");
    intc= substraction(a,b);
    printf("%i",c);
}
int substract(int a, int b)
{
    return a-b;
}