/* 
10000
01000
00100
00010
00001*/

#include <stdio.h>
int main() {
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <=5; j++) {
            if (i == j) {
                printf("1");
            }
            else {
                printf("0");
            }
        }
        printf("\n");
    }
}