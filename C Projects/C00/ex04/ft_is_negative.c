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


_______________________________________________________________________________________________
--- Explanation ---

    Function Declaration:
        void ft_is_negative(int n): This line declares a function named ft_is_negative. It takes one argument, 
	an integer n, and does not return any value (void).

    Conditional Check for Negative:
        if (n < 0): This line checks if the value of n is less than zero. If this condition is true, the block of 
	code inside the braces will execute.

    Writing "N":
        write(1, "N", 1);: If n is negative, this line uses the write() function to output the character 'N'. 
	The 1 indicates that only one byte (the character 'N') will be written to the standard output (file descriptor 1).

    Conditional Check for Non-Negative:
        if (n >= 0): This line checks if the value of n is greater than or equal to zero. If this condition is true, 
	the block of code inside the braces will execute.

    Writing "P":
        write(1, "P", 1);: If n is non-negative (zero or positive), this line uses the write() function to output 
	the character 'P'. Similarly, the 1 indicates that one byte (the character 'P') will be written to the standard output.




Português:

    Declaração da Função:
        void ft_is_negative(int n): Esta linha declara uma função chamada ft_is_negative. Ela aceita um argumento, um 
	inteiro n, e não retorna nenhum valor (void).

    Verificação Condicional para Negativo:
        if (n < 0): Esta linha verifica se o valor de n é menor que zero. Se essa condição for verdadeira, o bloco de 
	código dentro das chaves será executado.

    Escrevendo "N":
        write(1, "N", 1);: Se n for negativo, esta linha usa a função write() para enviar o caractere 'N'. O 1 indica que 
	apenas um byte (o caractere 'N') será escrito na saída padrão (descritor de arquivo 1).

    Verificação Condicional para Não Negativo:
        if (n >= 0): Esta linha verifica se o valor de n é maior ou igual a zero. Se essa condição for verdadeira, o bloco 
	de código dentro das chaves será executado.

    Escrevendo "P":
        write(1, "P", 1);: Se n for não negativo (zero ou positivo), esta linha usa a função write() para enviar o 
	caractere 'P'. Da mesma forma, o 1 indica que um byte (o caractere 'P') será escrito na saída padrão.
