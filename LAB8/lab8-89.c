#include <stdio.h>
int main() {
    int a[5], b[5], *aptr, *bptr, i;
    aptr = &a;

    printf("Enter array A elements: \n");
    for (i = 0; i< 5; i++) {
        scanf("%d", (aptr+i));

    }
    
    for (i = 0; i< 5; i++) {
        b[i] = *(aptr + (4-i));
    }
    printf("Value of B array: \n");
    for (i = 0; i < 5; i++) {
        printf("%5d", b[i]);
    }
}