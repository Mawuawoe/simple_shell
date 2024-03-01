#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main() {
    char line[100];

    // Read lines until EOF is encountered
    char *read = fgets(line, sizeof(line), stdin);
    while (read != NULL) {
        // Process each line here
        printf("Line read: %s", line);
        read = fgets(line, sizeof(line), stdin);
    }

    return 0;
}

