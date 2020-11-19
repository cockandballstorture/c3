#include <stdio.h>
int main()
{
    int i,q,k,j;
    int w[8];
    for (i=0;i<8;i++)
    {
        scanf("%d",&q);
        w[i]=q;
    }
    for (j=0;j<8;j++)
    {
       for (i=0;i<7;i++)
      {
          if (w[i]>w[i+1]){
              k=w[i+1];
              w[i+1]=w[i];
              w[i]=k;
          }
          else{
              w[i]=w[i];
          }

       }
    }
    for (i=0; i<8; i++)
    {
       printf("%d", w[i]);
    }
    return 0;
}
