#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50], s2[50], copy[50], joined[100];
    int len1, len2, result;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    /* strlen() finds the length of a string */
    len1 = strlen(s1);
    len2 = strlen(s2);
    printf("\nLength of first string  = %d\n", len1);
    printf("Length of second string = %d\n", len2);

    /* strcpy() copies one string into another */
    strcpy(copy, s1);
    printf("Copied string = %s\n", copy);

    /* strcat() joins two strings */
    strcpy(joined, s1);
    strcat(joined, s2);
    printf("Concatenated string = %s\n", joined);

    /* strcmp() compares two strings (0 means equal) */
    result = strcmp(s1, s2);
    if (result == 0)
        printf("Both strings are equal\n");
    else
        printf("Strings are not equal (strcmp returns %d)\n", result);

    return 0;
}
