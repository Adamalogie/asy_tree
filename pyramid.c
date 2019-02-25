#include<stdio.h>
#include<cs50.h>

int main(void)
{
 int n=get_int("un chiffre :");
 for(int i=0; i<n; i++)
 {
     printf("%i\n", i);
     for(int j=0; j<i; j++)
     {
         printf("#");
     }
 }
printf("\n");
}