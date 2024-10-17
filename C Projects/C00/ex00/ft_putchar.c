#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
#include <unistd.h>: Includes the necessary library to use the write() function.
	
void ft_putchar(char c): Declaration of the ft_putchar function, which accepts a character 
			 as an argument and returns nothing (void).
	
write(1, &c, 1): Calls the write function to send 1 byte (the character c) to file descriptor 1, 
		 which represents standard output (the terminal). The first argument 1 indicates standard output,
		 the second argument &c is the address of the character to be sent, and the third argument 1 indicates
		 that only 1 byte (the character) will be sent.
*/
