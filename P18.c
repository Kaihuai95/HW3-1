#include <stdio.h>
#include <string.h>

void main(void)
{
    char string1[60] = "Welcome";
    char string2[60];

    int len;

    strcpy(string2, string1);
    printf("string2=%s\n", string2);

    len = strlen(string2);
    printf("字串長度為%d\n", len);
}