#include<stdio.h>
#include<stdlib.h>
int main ()
{
 int n, num, onesCount = 0;
 printf("Enter a non-negative integer ");
 scanf("%d", &n);
 if (n < 0)
   {
        printf ("INVALID INPUT");
        return 0;
   }
 num = n;
 while (n > 0)
   {
     if (n % 2 == 1)
     {
          onesCount++;
      }
     n = n / 2;
   }
 printf ("%d has %d ones in binary \n ", num, onesCount);

 return 0;
}
