#include <stdio.h>

int strLen(char s[]) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

int indexOf(char text[], char word[]) {
    int textLen = strLen(text);
    int wordLen = strLen(word);

    if (wordLen > textLen) return -1;

    for (int i = 0; i <= textLen - wordLen; i++) {
        int j;
        for (j = 0; j < wordLen; j++) {
            if (text[i + j] != word[j]) break;
        }
        if (j == wordLen) return i;
    }

    return -1;
}

int main() {
    char text[] = "The cat is on the table";
    char word[] = "cat";

    int result = indexOf(text, word);

    printf("Индекс слова \"%s\": %d\n", word, result);

    return 0;
}
