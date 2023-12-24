#include <stdio.h>
#include <ctype.h>
#include <locale.h>

#define Consonant (1u << ('b' - 'a') | 1u << ('c' - 'a') | 1u << ('d' - 'a') | 1u << ('f' - 'a') | 1u << ('g' - 'a') | 1u << ('h' - 'a') | 1u << ('j' - 'a') | 1u << ('k' - 'a') | 1u << ('l' - 'a') | 1u << ('m' - 'a') | 1u << ('n' - 'a') | 1u << ('p' - 'a') | 1u << ('q' - 'a') | 1u << ('r' - 'a') | 1u << ('s' - 'a') | 1u << ('t' - 'a') | 1u << ('v' - 'a') | 1u << ('w' - 'a') | 1u << ('x' - 'a') | 1u << ('y' - 'a') | 1u << ('z' - 'a'))

unsigned int createMask(const char *word) {
    unsigned int mask = 0;
    while (*word != '\0') {
        if (isalpha(*word) && (Consonant & (1u << (*word - 'a')))) {
            mask |= 1u << (*word - 'a');
        }
        word++;
    }
    return mask;
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    char str[100], str2[100];
    int c;
    unsigned int mask1 = 0, mask2 = 0;
    int wordCount = 0;
    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            ungetc(c, stdin);
            char *currentWord;
            int index = 0;
            while ((c = getchar()) != EOF && isalpha(c)) {
                currentWord[index++] = c;
            }
            currentWord[index] = '\0';
            if (index > 0) {
                if (wordCount == 1) {
                    mask2 = createMask(currentWord);
                    if (mask1 != 0 && mask2 != 0 && (mask1 & mask2) == 0) {
                        printf("There are two words where consonants do not intersect\n");
                    }
                } else {
                    wordCount = 1;
                }
                mask1 = createMask(currentWord);
            }

        }
    }
    return 0;
}
