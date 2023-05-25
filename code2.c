// Allocate the memory using calloc function.
// void* calloc( size_t num, size_t size );
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    int *p1 = calloc(n , sizeof(int));

    if(p1 == NULL)
    printf("Memory Not allocated.");

    else
    {
        printf("Memory allocated succesfully.\n");

        for(int i=0;i<n;i++)
        {
            p1[i] = i+1;
        }
        for(int i=0;i<n;i++)
        {
            printf("ptr[%d] = %d\n",i,p1[i]);
        }
    }
}
// -------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
 
// int main(void)
// {
//     int *p1 = calloc(4, sizeof(int));    // allocate and zero out an array of 4 int
//     int *p2 = calloc(1, sizeof(int[4])); // same, naming the array type directly
//     int *p3 = calloc(4, sizeof *p3);     // same, without repeating the type name
 
//     if(p2) {
//         for(int n=0; n<4; ++n) // print the array
//             printf("p2[%d] == %d\n", n, p2[n]);
//     }
 
//     free(p1);
//     free(p2);
//     free(p3);
// }