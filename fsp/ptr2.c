#include <stdio.h>
int main()
{
    unsigned int x[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    printf("%p , %p , %p\n", (void *)(x + 3),
           (void* )(x + 3), (void *)((x + 2) + 3));
   // printf("%u", "%u", "%u\n", (unsigned int)x + 3), (unsigned int)((void*)(x + 3)), (unsigned int)((void*)((x + 2) + 3));
    return 0;
}