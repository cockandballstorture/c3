#include <stdio.h>
#include <math.h>
void check();
void calc();
void main()
{
    int x;
    scanf("%d",&x);
    if (x>0){
        calc(x);
    }
    else{
        printf("enter number>0");
        scanf("%d",&x);
        check(x);
}
}
void check(int x)
{   
    if (x>0){
        calc(x);
    }
    else{
        printf("enter number>0");
        scanf("%d",&x);
        check(x);
    }
}
void calc(int x)
{
    int k,j;
    j=x*(x+1)*(2*x+1)/6;
    printf("%d",j);
}
