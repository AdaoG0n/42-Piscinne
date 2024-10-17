#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7' || b != '8' || c != '9')
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}



--- Explanation ---

English:

    #include <unistd.h>: //Includes the library to use the write() function.

    void ft_print_comb(void): //Declares the ft_print_comb function, which takes no arguments and returns no values (void).

    int a, b, c;: //Declares three integer variables a, b, and c to represent digits.

    a = '0';: //Initializes a with the ASCII value of '0'.

    while (a <= '7'): //Starts a loop that continues while a is less than or equal to '7'.

    b = a + 1;: //Initializes b to the next digit after a.

    while (b <= '8'): //Starts a nested loop that continues while b is less than or equal to '8'.

    c = b + 1;: //Initializes c to the next digit after b.

    while (c <= '9'): //Starts another nested loop that continues while c is less than or equal to '9'.

    write(1, &a, 1);: //Uses the write() function to send the character a to the terminal (standard output).

    write(1, &b, 1);: //Uses the write() function to send the character b to the terminal (standard output).

    write(1, &c, 1);: //Uses the write() function to send the character c to the terminal (standard output).

    if (a != '7' || b != '8' || c != '9'): //Checks if the current combination is not the last one ('789').

    write(1, ", ", 2);: //If it's not the last combination, writes a comma and space after the digits.

    c++;: //Increments c to get the next digit.

    b++;: //Increments b to get the next digit.

    a++;: //Increments a to get the next starting digit.




Português:

    #include <unistd.h>: //Inclui a biblioteca para usar a função write().

    void ft_print_comb(void): //Declaração da função ft_print_comb, que não recebe argumentos e não retorna valores (void).

    int a, b, c;: //Declara três variáveis inteiras a, b e c para representar dígitos.

    a = '0';: //Inicializa a com o valor ASCII de '0'.

    while (a <= '7'): //Inicia um loop que continua enquanto a for menor ou igual a '7'.

    b = a + 1;: //Inicializa b com o próximo dígito após a.

    while (b <= '8'): //Inicia um loop aninhado que continua enquanto b for menor ou igual a '8'.

    c = b + 1;: //Inicializa c com o próximo dígito após b.

    while (c <= '9'): //Inicia outro loop aninhado que continua enquanto c for menor ou igual a '9'.

    write(1, &a, 1);: //Usa a função write() para enviar o caractere a para o terminal (saída padrão).

    write(1, &b, 1);: //Usa a função write() para enviar o caractere b para o terminal (saída padrão).

    write(1, &c, 1);: //Usa a função write() para enviar o caractere c para o terminal (saída padrão).

    if (a != '7' || b != '8' || c != '9'): //Verifica se a combinação atual não é a última ('789').

    write(1, ", ", 2);: //Se não for a última combinação, escreve uma vírgula e um espaço após os dígitos.

    c++;: //Incrementa c para obter o próximo dígito.

    b++;: //Incrementa b para obter o próximo dígito.

    a++;: //Incrementa a para obter o próximo dígito inicial.
