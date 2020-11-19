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
    int k,i,j;
    j=0;
    for  (i = 1;i!= x+1; i++ ){
        k=pow(i,2);
        j=k+j;
    }
    printf("%d",j);
}
