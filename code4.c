// Re-allocate the memory using realloc() function
// void *realloc( void *ptr, size_t new_size );
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    int n;
    printf("Enter the num - ");
    scanf("%d",&n);
    ptr = calloc(n, sizeof(int));

    if(ptr==NULL)
    printf("Memory Not Allocated");

    else
    {
        printf("Memory allocated successfully\n");
        printf("\nBefore reallocation\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d, ",i+1);
        }
        // Reallocate memory
        printf("\nEnter the NEW SIZE of array - ");
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
        ptr = realloc(ptr, n*sizeof(int));
        printf("After reallocation\n");
        for(int i=0;i<n;i++)
        {
            printf("ptr[%d] = %d\n",i,ptr[i]);
        }
    }
}