#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(sizeof(int));
    *a = 42;
    
    free(a);
    // a doesn't exist anymore.
    printf("a=%d\n", a);
    return 0;
}

