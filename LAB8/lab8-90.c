#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int l = 0, count = 0, counts = 0, i;
    char *ptr = text;
    printf("Enter the string: ");
    gets(text);

    for (; *ptr !='\0'; ptr++) {
        if (*ptr != ' ') {
            count++;
        }
    }
    printf("length of array including spaces:%d", count);
    /*for (i = 0; *(ptr + i)!='\0'; i++) {
        count++;
    }
    printf("length of array including spaces:%d", count);*/

    /*for (i = 0; *(ptr + i)!='\0'; i++) {
        if (*(ptr+i) != ' ') 
        {
            counts++;
        }
    }
    printf("length of array without spaces: %d, counts"); */
}

