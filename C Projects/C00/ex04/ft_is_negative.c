#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	if (n >= 0)
	{
		write(1, "P", 1);
	}
}



--- Explanation ---

English:

    #include <unistd.h>: //Includes the library to use the write() function.

    void ft_is_negative(int n): //Declares the ft_is_negative function, which takes an integer n as an argument and 
				//returns no values (void).

    if (n < 0): //Checks if the value of n is negative.

    write(1, "N", 1);: //If n is negative, uses the write() function to send the character 'N' to the terminal (standard output).

    if (n >= 0): //Checks if the value of n is zero or positive.

    write(1, "P", 1);: //If n is zero or positive, uses the write() function to send the character 'P' to the terminal (standard output).



Português:

    #include <unistd.h>: //Inclui a biblioteca para usar a função write().

    void ft_is_negative(int n): //Declaração da função ft_is_negative, que aceita um inteiro n como argumento e não 
				//retorna valores (void).

    if (n < 0): //Verifica se o valor de n é negativo.

    write(1, "N", 1);: //Se n for negativo, usa a função write() para enviar o caractere 'N' para o terminal (saída padrão).

    if (n >= 0): //Verifica se o valor de n é zero ou positivo.

    write(1, "P", 1);: //Se n for zero ou positivo, usa a função write() para enviar o caractere 'P' para o terminal (saída padrão).
