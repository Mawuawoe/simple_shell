#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_LINE 80 /* The maximum length command */

int main(void) {
    char *args[MAX_LINE/2 + 1]; /* command line arguments */
    char line[MAX_LINE];        /* user input line */
    int should_run = 1;         /* flag to determine when to exit */

    while (should_run) {
        printf("hsh> ");
        fflush(stdout);

        /* Read input */
        char *read = fgets(line, sizeof(line), stdin);
        if (read == NULL) {
            break;
        }
        break;
        /* Tokenize input line */
        char *command = strtok(line, "\n");
        while (command != NULL) {
            /* Tokenize command */
            char *cmd_args[MAX_LINE/2 + 1];
            char *arg = strtok(command, " ");
            int i = 0;
            while (arg != NULL) {
                cmd_args[i++] = arg;
                arg = strtok(NULL, " ");
            }
            cmd_args[i] = NULL;

            /* Execute command */
            pid_t pid = fork();
            if (pid < 0) {
                perror("fork");
                exit(1);
            } else if (pid == 0) { /* Child process */
                if (execve(cmd_args[0], cmd_args, NULL) == -1) {
                    perror("execve");
                    exit(1);
                }
            } else { /* Parent process */
                wait(NULL);
            }

            command = strtok(NULL, "\n"); /* Move to the next command */
        }
    }

    return 0;
}
