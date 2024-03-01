#include <stdio.h>
#include <stdlib.h>

void trim(char *str) {
    char *end;
    // Trim leading spaces
    while (*str && (*str == ' ' || *str == '\t'))
        str++;
    if (*str == 0)  // All spaces?
        return;
    // Trim trailing spaces
    end = str + strlen(str) - 1;
    while (end > str && (*end == ' ' || *end == '\t'))
        end--;
    // Write new null terminator
    *(end + 1) = 0;
}
int main() {
    char input[] = "   Hello, world!   ";
    printf("Before: \"%s\"\n", input);
    char *trimmed = remove_spaces(input);
    printf("After:  \"%s\"\n", trimmed);
    free(trimmed); // Don't forget to free the dynamically allocated memory
    return 0;
}