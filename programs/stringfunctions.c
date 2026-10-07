#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[100], second[100], copy[100], joined[200];
    printf("Enter first string: ");
    if (!fgets(first, sizeof first, stdin)) return 1;
    first[strcspn(first, "\n")] = '\0';
    printf("Enter second string: ");
    if (!fgets(second, sizeof second, stdin)) return 1;
    second[strcspn(second, "\n")] = '\0';
    printf("Lengths: %zu and %zu\n", strlen(first), strlen(second));
    strcpy(copy, first);
    printf("Copy: %s\n", copy);
    strcpy(joined, first);
    strcat(joined, second);
    printf("Joined: %s\n", joined);
    int comparison = strcmp(first, second);
    if (comparison == 0) printf("Strings are equal\n");
    else if (comparison < 0) printf("First string comes before second\n");
    else printf("First string comes after second\n");
    return 0;
}
