#include <stdio.h>

int main()
{
   int a;
   int b;
   int c;
   int d;
   int max;
   int ctr;
   printf("A: ");
   scanf("%d", &a);
   if (a < 0)
   {
       printf("INVALID INPUT\n");
       return -1;
   }
   printf("B: ");
   scanf("%d", &b);
   if (b < 0)
   {
       printf("INVALID INPUT\n");
       return -1;
   }
   printf("C: ");
   scanf("%d", &c);
   if (c < 0)
   {
       printf("INVALID INPUT\n");
       return -1;
   }
   printf("D: ");
   scanf("%d", &d);
   if (d < 0)
   {
       printf("INVALID INPUT\n");
       return -1;
   }
   printf("\n");
   max = a;
   if (b > max)
   {
       max = b;
   }
   if (c > max)
   {
       max = c;
   }
   if (d > max)
   {
       max = d;
   }
   for (ctr = max; ctr >= 1; --ctr) {
       // display new line
       printf(" ");
       if (ctr <= a)
       {
           printf("X");
       }
       else
       {
           printf(" ");
       }
       printf(" ");
       if (ctr <= b)
       {
           printf("X");
       }
       else
       {
           printf(" ");
       }
       printf(" ");
       if (ctr <= c)
       {
           printf("X");
       }
       else
       {
           printf(" ");
       }
       printf(" ");
       if (ctr <= d)
       {
           printf("X");
       }
       else
       {
           printf(" ");
       }
       printf("\n");
   }
   printf("---------\n");
   printf(" A B C D\n");
   return 0;
}
