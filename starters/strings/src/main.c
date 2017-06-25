#include <stdlib.h>
#include <stdio.h>
#include <string.h>





char *parse(const char *input, char **entry, char **transcription) {
    // so we can modify it as we go
    char *str = input;
    char *end;

    char *delim = strchr(str, '/');

    // Trim leading space
    while(isspace(*str)) str++;

    if(*str == 0)  // All spaces?
        return str;

    // Trim trailing space
    end = str + strlen(str) - 1;
    while(end > str && isspace(*end)) end--;

    // Write new null terminator
    *(end+1) = 0;

    return str;
}

int main(int argc, char **argv) {
    const char *input = "  word1 word2   //   \"transcription\"  ";
    const char *expected_entry = "word1 word2";
    const char *expected_transcription = "transcription";
    
    char *resulting_entry;
    char *resulting_transcription;

    parse(input, &resulting_entry, &resulting_transcription);
    
    if (strcmp(expected_entry, resulting_entry) == 0) {
        printf("entries match\n");
    } else {
        printf("entries don't match\n");
    }

    if (strcmp(expected_transcription, resulting_transcription) == 0) {
        printf("transcriptions match\n");
    } else {
        printf("transcriptions don't match\n");
    }

    exit(EXIT_SUCCESS);
}
