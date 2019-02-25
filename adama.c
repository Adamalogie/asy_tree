#include<stdio.h>
#include<cs50.h>

int main(void)
{
 int a= get_int("a: ");
 int b= get_int("b: ");
 int c= get_int("c: ");

 // comparaison condition
 if(a<b && b<c)
 {
  printf("%i<%i<%i\n",a,b,c);
 }
 else if(a<c && c<b)
 {
    printf("%i<%i<%i\n",a,c,b);
 }
 else if(b<a && a<c)
 {
    printf("%i<%i<%i\n",b,a,c);
 }
 else if(b<c && c<a)
 {
    printf("%i<%i<%i\n",b,c,a);
 }
 else if(c<a && a<b)
 {
     printf("%i<%i<%i\n",c,a,b);
 }
 else if(c<b && b<a)
 {
    printf("%i<%i<%i\n",c,b,a);
 }
}