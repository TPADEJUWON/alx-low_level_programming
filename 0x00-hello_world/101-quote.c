#include <unistd.h>
/**
 * main -UNIX
 * Return: Always 1 (Success)
 */
int main(void)
{
const char message[];

message [] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, sizeof(message) - 1);
return (1);
}
