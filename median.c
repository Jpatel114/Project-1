#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    //takes input from user
    //checking a is a middle number or not
    if(b>a && a>c || c>a && a>b){
        printf("Median : %d\n",a);
    }
    //checking b is a middle number or not
    if(a>b && b>c || c>b && b>a){
        printf("Median : %d\n",b);
    }
    //checking c is a middle number or not
    if(a>c && c>b || b>c && c>a){
        printf("Median : %d\n",c);
    }
    if(a < 0 || b< 0 || c < 0){
            printf("Invalid Input");
    }
    return 0;


}
