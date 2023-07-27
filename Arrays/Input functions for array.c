#include <stdio.h>

void  main()
{
    int arr[10];
    int i;


    printf("////Input 10 elements in the array////\n\n");
    for(i=0; i<10; i++)
    {
	    printf("Element - %d : ",i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");
    printf("{");
    for(i=0; i<=10; i++)
    {

        printf("%d", arr[i]);
        if(i!=9)
            printf(",");

    }
    printf("}");
    printf("\n");
}
