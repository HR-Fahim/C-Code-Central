#include <stdio.h>

int main()
{
  int i,x,n;
  printf("The prime number between 1 and 50 are:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      printf("%d",i);

  if(i<3)
  {
      printf("*");
  }
  else
  {
      for(x=2;x<=(int)sqrt(i);++x)
        if(i%x==0)
            break;
        if(i%x!=0)
        {
            printf("*");
        }
  }
  if(i%10==0)
    printf("\n");
  else
    printf("\t");
  }
  return 0;
}
