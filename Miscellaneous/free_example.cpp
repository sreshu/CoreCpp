#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *p = malloc(100); 
    free(p);

    return 0;
}



//     free can only free memory that was reserved with malloc or calloc.

//     free can only release memory that has not been released before. Releasing the same block of memory twice will result in an error.

