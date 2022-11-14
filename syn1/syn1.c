#include <stdio.h>
#include <ctype.h>
#include <string.h>

int get_words(FILE* fp, char s[][21], int cnt[], int max_cnt) {
    char c;
    int i = 0;
    while (i <= max_cnt && (c = getc(fp)) != EOF) {
        if (!isalpha(c)) continue;
        char new[20];
        new[0] = tolower(c);
        int j = 1;
        while (isalpha(c = getc(fp)))
            new[j++] = tolower(c);
        new[j] = '\0';
        for (int k = 0; k < i; ++k) {
            if (strcmp(new, s[k]) == 0) {
                ++cnt[k];
                goto next_loop;
            }
        }
        cnt[i] = 1;
        strcpy_s(s[i++], 20, new);
        next_loop: ;
    }
    return i;
}

#define max_word_cnt 600
#define max_word_length 20

int main(void) {
    FILE* fp;
    if (fopen_s(&fp, "article.txt", "r")) {
        puts("Failed to open input file.");
        return 1;
    }
    char words[max_word_cnt][max_word_length + 1];
    int cnt[max_word_cnt] = {0};
    int dic_size = get_words(fp, words, cnt, 1000);
    fclose(fp);
    for (int i = 0; i < dic_size - 1 ; i++) {
        int min = i;
        for (int j = i + 1; j < dic_size; j++) {
            if (strcmp(words[j], words[min]) < 0)
                min = j;
        }
        char tmp_word[21];
        strcpy_s(tmp_word, 20, words[i]);
        strcpy_s(words[i], 20, words[min]);
        strcpy_s(words[min], 20, tmp_word);
        int tmp = cnt[i];
        cnt[i] = cnt[min];
        cnt[min] = tmp;
    }
    if (fopen_s(&fp, "dictionary.txt", "w")) {
        puts("Failed to open output file.");
        return 1;
    }
    for (int i = 0; i < dic_size; ++i)
        fprintf(fp, "%s [%d]\n", words[i], cnt[i]);
    fclose(fp);
    return 0;
}