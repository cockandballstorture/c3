#include <stdio.h>
int main()
{
    int i,q,k,j;
    int w[16];
    for (i=0;i<16;i++)
    {
        scanf("%d",&q);
        if (q>=0 && q<16){
            w[i]=q;
        }
        else{
            w[i]=0;
            printf("no");
        }
    }
    for (i=0; i<16; i++)
    {
       printf("%d", w[i]);
    }
    return 0;
}
