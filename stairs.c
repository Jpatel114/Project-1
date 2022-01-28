#include <stdio.h>
int main() {
    int num = 0;
    int step =1;
    printf("Enter the maximum no. of rows for the pattern.\n");
    scanf("%d", &num);

    printf("\n up:");
    printf("\n");
    for (int i=1; i<=num; i++){
      for(int w=1; w<= 3-i;w++){
        printf(" ");
      }
      for (int j=1; j<=i; j++){
        printf(" X");
        }
        printf("\n");
        }

  // This loop is only completing the down part
  printf("\ndown:");
  printf("\n");
  for (int i=1; i<=num; i++){
    for (int j=1; j<=i && j>0; j++){
        printf("X");
    }
      printf("\n");
    }

  printf("\nup-down:");
  printf("\n");
  // This loop is only completing up-dow part
  for(int a=1;a<=num;a++)
        {
                for(int k=1;k<=num-a;k++)
                {
                        printf(" ");
                }
                for(int l=1;l<=step;l++)
                {
                        printf("X");
                }
                step+=2;
                printf("\n ");
        }
  return 0;
}
