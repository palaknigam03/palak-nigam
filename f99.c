//Concatenate two strings.
#include <stdio.h>
#include <string.h>
int main()
{
    char destination[] = "palak";
    char source[] = "nigam";
    strcat(destination,source);
    printf("Concatenated String: %s\n", destination);
    return 0;
}

