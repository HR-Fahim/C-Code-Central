#include <stdio.h>
int main()
{
  int n,i,j;

  printf("Input value: ");
  scanf("%d",&n);

  printf("Output:\n",n);

  for (i=5;i>=0;i--)
  {
    j=n>>i;

    if (j&1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}
