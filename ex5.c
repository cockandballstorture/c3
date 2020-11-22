#include <stdio.h>
int main()
{
    int x,b,k;
    scanf("%d",&x);
    b=x%10;
    k=(x/10)%10;
    switch (b) {
    case 1:
          switch(k){
              case 1:
                printf("%d апельсинов",x);
                break;
              default:
                printf("%d апельсин",x);
                break;
          }
        break;  
    case 2	:
                  switch(k){
              case 1:
                printf("%d апельсинов",x);
                break;
              default:
                printf("%d апельсина",x);
                break;
                  }
        break;
    case 3	:
                     switch(k){
              case 1:
                printf("%d апельсинов",x);
                break;
              default:
                printf("%d апельсина",x);
                break;
                     }
        break;
    case 4	:
                             switch(k){
              case 1:
                printf("%d апельсинов",x);
                break;
              default:
                printf("%d апельсина",x);
                break;
                     }
        break;
    default:
        printf("%d апельсинов",x);
    }
}
