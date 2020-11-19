#include <stdio.h>
int main()
{
    int x,b;
    scanf("%d",&x);
    b=x%10;
    switch (b) {
    case 1:
        printf("%d апельсин",x);
        break;
    case 2	:
        printf("%d апельсина",x);
         break;
    case 3	:
        printf("%d апельсина",x);
         break;
    case 4	:
        printf("%d апельсина",x);
         break;
    default:
        printf("%d апельсинов",x);
    }
}
  
