#include <stdio.h>

int main ()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;
    printf("i e j: %i, %i \n",i, j);
    printf("p e q: %p, %p \n", p, q);
    return 0;
}