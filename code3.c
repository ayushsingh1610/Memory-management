// Free the memory using free() function.
// void free( void* ptr );
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr1, *ptr2;
    int n;
    printf("Enter the num - ");
    scanf("%d",&n);
    ptr1 = malloc(n * sizeof(int));
    ptr2 = calloc(n,sizeof(int));
    
    if(ptr1 == NULL || ptr2 == NULL)
    printf("Memory not ALLOCATED successfully");

    else
    {
        free(ptr1);
        free(ptr2);
        printf("memory are freed successfully");
    }
}
// __________________________________________________________________________________________________________________________________________
// #include <stdlib.h>
 
// int main(void)
// {
//     int *p1 = malloc(10*sizeof *p1);
//     free(p1); // every allocated pointer must be freed
 
//     int *p2 = calloc(10, sizeof *p2);
//     int *p3 = realloc(p2, 1000*sizeof *p3);
//     if(p3) // p3 not null means p2 was freed by realloc
//        free(p3);
//     else // p3 null means p2 was not freed
//        free(p2);
// }