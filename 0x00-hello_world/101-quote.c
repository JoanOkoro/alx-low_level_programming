#include <unistd.h>
/**
 * main -being a genuis to understand unix
 * Return: 1
 * Description: code by joan okoro
*/
int main(void)
{
const char *message = "and that piece of art is useful\"
Dora Korpar,2015-10-19\n";
write(STDOUT_FILENO, message, strlen(message));
return (1);
}
