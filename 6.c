#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXT_LEN 1000
#define MAX_WORDS 200
#define WORD_LEN 50

void main() {
    char text1[MAX_TEXT_LEN], text2[MAX_TEXT_LEN], text3[MAX_TEXT_LEN] = "", text2W[MAX_WORDS][WORD_LEN];
    int words2_count = 0;
    const char *znaki = " .,!?;:-()\"\'\n\t";

    printf("Введіть перший текст: ");
    fgets(text1, MAX_TEXT_LEN, stdin);
    text1[strcspn(text1, "\n")] = 0;
    printf("Введіть другий текст: ");
    fgets(text2, MAX_TEXT_LEN, stdin);
    text2[strcspn(text2, "\n")] = 0;
    char text1C[MAX_TEXT_LEN];
    char text2C[MAX_TEXT_LEN];
    strcpy(text1C, text1);
    strcpy(text2C, text2);

    char *token = strtok(text2C, znaki);
    while (token != NULL) {
        if (words2_count < MAX_WORDS) {
            strcpy(text2W[words2_count], token);
            words2_count++;
        }
        token = strtok(NULL, znaki);
    }

    token = strtok(text1C, znaki);
    int flag = 1;

    while (token != NULL) {
        int text2Exists = 0;

        for (int i = 0; i < words2_count; i++) {
            if (strcmp(token, text2W[i]) == 0) {
                text2Exists = 1; break;
            }
        }

        if (!text2Exists) {
            if (!flag) {
                strcat(text3, " ");
            }
            strcat(text3, token);
            flag = 0;
        }

        token = strtok(NULL, znaki);
    }

    printf("\nРезультат (слова з 1-го тексту, яких немає в 2-му):\n%s", text3);
}
