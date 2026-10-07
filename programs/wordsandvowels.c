#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, words = 0, vowels = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';   /* remove the newline at the end */

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        /* Check for vowels (both cases) */
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;

        /* A word starts at a non-space after a space (or at the start) */
        if (ch != ' ' && (i == 0 || str[i - 1] == ' '))
            words++;
    }

    printf("The string is: %s\n", str);
    printf("Number of words  = %d\n", words);
    printf("Number of vowels = %d\n", vowels);

    return 0;
}
