#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

--- Explanation ---

English:

    #include <unistd.h>: //Includes the library to use the write() function.

    void ft_putchar(char c): //Declares the ft_putchar function, which takes a character as an argument 
			     //and returns no values (void).

    write(1, &c, 1): //Uses the write() function to send the character stored in c to the terminal (standard output).

Português:

    #include <unistd.h>: //Inclui a biblioteca para usar a função write().

    void ft_putchar(char c): //Declaração da função ft_putchar, que aceita um caractere como 
			     //argumento e não retorna valores (void).

    write(1, &c, 1): //Usa a função write() para enviar o caractere armazenado em c para o terminal (saída padrão).
