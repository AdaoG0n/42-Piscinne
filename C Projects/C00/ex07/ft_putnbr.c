#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
		else
		{
			nb = -nb;
		}
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar ((nb % 10) + '0');
}



--- Explanation ---

English:

    #include <unistd.h>: //Includes the library to use the write() function.

    void ft_putchar(char c): //Declares the ft_putchar function, which takes a character as an argument and returns no values (void).

    write(1, &c, 1);: //Uses the write() function to send the character stored in c to the terminal (standard output).

    void ft_putnbr(int nb): //Declares the ft_putnbr function, which takes an integer nb as an argument and returns no values (void).

    if (nb < 0): //Checks if the number nb is negative.

    ft_putchar('-');: //If nb is negative, prints the minus sign.

    if (nb == -2147483648): //Checks if nb is the minimum value for a 32-bit signed integer.

    ft_putchar('2');: //If nb is -2147483648, prints '2' (the first digit of the positive equivalent).

    nb = 147483648;: //Converts nb to its positive equivalent (the remaining part).

    else: //If nb is not -2147483648.

    nb = -nb;: //Converts nb to its positive equivalent.

    if (nb >= 10): //Checks if nb is greater than or equal to 10.

    ft_putnbr(nb / 10);: //Recursively calls ft_putnbr to print the digits before the last one.

    ft_putchar((nb % 10) + '0');: //Prints the last digit of nb by converting it to a character.




Português:

    #include <unistd.h>: //Inclui a biblioteca para usar a função write().

    void ft_putchar(char c): //Declaração da função ft_putchar, que aceita um caractere como argumento e não retorna valores (void).

    write(1, &c, 1);: //Usa a função write() para enviar o caractere armazenado em c para o terminal (saída padrão).

    void ft_putnbr(int nb): //Declaração da função ft_putnbr, que aceita um inteiro nb como argumento e não retorna valores (void).

    if (nb < 0): //Verifica se o número nb é negativo.

    ft_putchar('-');: //Se nb for negativo, imprime o sinal de menos.

    if (nb == -2147483648): //Verifica se nb é o valor mínimo para um inteiro com sinal de 32 bits.

    ft_putchar('2');: //Se nb for -2147483648, imprime '2' (o primeiro dígito do equivalente positivo).

    nb = 147483648;: //Converte nb para seu equivalente positivo (a parte restante).

    else: //Se nb não for -2147483648.

    nb = -nb;: //Converte nb para seu equivalente positivo.

    if (nb >= 10): //Verifica se nb é maior ou igual a 10.

    ft_putnbr(nb / 10);: //Chama recursivamente ft_putnbr para imprimir os dígitos antes do último.

    ft_putchar((nb % 10) + '0');: //Imprime o último dígito de nb convertendo-o em um caractere.
