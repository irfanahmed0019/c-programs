#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char text[1000];
    int words = 0, vowels = 0, in_word = 0;
    printf("Enter a string: ");
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];
        int lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u') vowels++;
        if (isspace(ch)) in_word = 0;
        else if (!in_word) { words++; in_word = 1; }
    }
    printf("Words = %d\nVowels = %d\n", words, vowels);
    return 0;
}
