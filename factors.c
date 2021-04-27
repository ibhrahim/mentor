#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,sum=0;
    scanf("%d",&n);
    printf("factors");
    for(int i=1;i<=n;i++)
    {
     if(n%i==0)
     printf("\n %d",i);
    }
    for(;;)
    {
    while(n%10==0)
    {
      sum=sum+n%10*n%10;
      if(n==0)
      {
          printf("\nheere %d",sum);
          n=sum;
      }
      //printf("%d\n",d);

    }}
    printf("sum is%d",sum);
}
