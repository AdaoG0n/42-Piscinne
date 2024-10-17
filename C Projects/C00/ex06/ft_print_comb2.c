#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int n)
{
	ft_putchar((n / 10) + '0');
	ft_putchar((n % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_print_number(first);
			ft_putchar(' ');
			ft_print_number(second);
			if (first != 98 || second != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		first++;
	}
}


--- Explanation ---

English:

    #include <unistd.h>: //Includes the library to use the write() function.

    void ft_putchar(char c): //Declares the ft_putchar function, which takes a character as an argument and returns no values (void).

    write(1, &c, 1);: //Uses the write() function to send the character stored in c to the terminal (standard output).

    void ft_print_number(int n): //Declares the ft_print_number function, which takes an integer n as an argument and returns no values (void).

    ft_putchar((n / 10) + '0');: //Converts the tens digit of n to a character and outputs it.

    ft_putchar((n % 10) + '0');: //Converts the units digit of n to a character and outputs it.

    void ft_print_comb2(void): //Declares the ft_print_comb2 function, which takes no arguments and returns no values (void).

    int first, second;: //Declares two integer variables first and second to represent pairs of numbers.

    first = 0;: //Initializes first to 0.

    while (first <= 98): //Starts a loop that continues while first is less than or equal to 98.

    second = first + 1;: //Initializes second to the next number after first.

    while (second <= 99): //Starts a nested loop that continues while second is less than or equal to 99.

    ft_print_number(first);: //Calls the ft_print_number function to print the value of first.

    ft_putchar(' ');: //Prints a space between the two numbers.

    ft_print_number(second);: //Calls the ft_print_number function to print the value of second.

    if (first != 98 || second != 99): //Checks if the current pair is not the last one (98 and 99).

    ft_putchar(',');: //If it's not the last pair, writes a comma after the second number.

    ft_putchar(' ');: //Writes a space after the comma.

    second++;: //Increments second to get the next number.

    first++;: //Increments first to get the next starting number.




Português:

    #include <unistd.h>: //Inclui a biblioteca para usar a função write().

    void ft_putchar(char c): //Declaração da função ft_putchar, que aceita um caractere como argumento e não retorna valores (void).

    write(1, &c, 1);: //Usa a função write() para enviar o caractere armazenado em c para o terminal (saída padrão).

    void ft_print_number(int n): //Declaração da função ft_print_number, que aceita um inteiro n como argumento e não retorna valores (void).

    ft_putchar((n / 10) + '0');: //Converte o dígito das dezenas de n para um caractere e o exibe.

    ft_putchar((n % 10) + '0');: //Converte o dígito das unidades de n para um caractere e o exibe.

    void ft_print_comb2(void): //Declaração da função ft_print_comb2, que não recebe argumentos e não retorna valores (void).

    int first, second;: //Declara duas variáveis inteiras first e second para representar pares de números.

    first = 0;: //Inicializa first com 0.

    while (first <= 98): //Inicia um loop que continua enquanto first for menor ou igual a 98.

    second = first + 1;: //Inicializa second com o próximo número após first.

    while (second <= 99): //Inicia um loop aninhado que continua enquanto second for menor ou igual a 99.

    ft_print_number(first);: //Chama a função ft_print_number para imprimir o valor de first.

    ft_putchar(' ');: //Imprime um espaço entre os dois números.

    ft_print_number(second);: //Chama a função ft_print_number para imprimir o valor de second.

    if (first != 98 || second != 99): //Verifica se o par atual não é o último (98 e 99).

    ft_putchar(',');: //Se não for o último par, escreve uma vírgula após o segundo número.

    ft_putchar(' ');: //Escreve um espaço após a vírgula.

    second++;: //Incrementa second para obter o próximo número.

    first++;: //Incrementa first para obter o próximo número inicial.
