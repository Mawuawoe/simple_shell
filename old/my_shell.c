/**
 * main - entry point to the shell program
 * @ac: argument count
 * @argv: argument vector
 * Return: 0
*/
#include "shell.h"

int main(int ac, char **argv)
{
(void) ac;
if (isatty(STDIN_FILENO) == 1)
{
while (1)
{
display_prompt();
read_input(&argv[0]);
}
}
else
{
/*while(1)*/
/*{*/
/*read_input(&argv[0]);*/
/*}*/
read_input_non_inter(&argv[0]);
}
return (0);
}
