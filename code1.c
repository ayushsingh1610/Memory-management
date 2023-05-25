// Allocate the memory by the use of malloc function 
// ptr = (int*)malloc(n * sizeof(int))
#include<stdio.h>
#include<stdlib.h>
void  main()
{
    int *ptr;
    int n,i;
    printf("Enter the number - \n");
    scanf("%d",&n);
    
    ptr = malloc(n * 4);

    if(ptr == NULL )
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Memory allocated successfully\n");

        for(int i=0;i<n;i++)
        {
            ptr[i] = i+1;
        }
        printf("The elements of array - ");
        for(int i=0;i<n;i++)
        {
            printf("%d, ",ptr[i]);
        }
    }
}