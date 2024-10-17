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




_______________________________________________________________________________________________
--- Explanation ---

    Include Directive:
        Assumes the necessary header file <unistd.h> is included for using the write() function.

    Function to Print a Character:
        void ft_putchar(char c): This function takes a character c as an argument and writes it to the standard output 
	using the write() function.
        write(1, &c, 1);: This line sends the character c to file descriptor 1 (standard output, usually the terminal).

    Function to Print an Integer:
        void ft_putnbr(int nb): This function takes an integer nb as an argument and prints it to the standard output.

    Handling Negative Numbers:
        if (nb < 0): This checks if nb is negative.
        ft_putchar('-');: If true, it prints a minus sign to indicate that the number is negative.
        if (nb == -2147483648): This checks for the minimum integer value in a 32-bit system, which is -2147483648.
            ft_putchar('2');: Since this number cannot be represented as a positive integer, it prints 2 separately.
            nb = 147483648;: This modifies nb to 147483648 to allow further processing.
        else { nb = -nb; }: For other negative numbers, it converts nb to positive by negating it.

    Recursive Call for Larger Numbers:
        if (nb >= 10): This checks if nb has more than one digit.
        ft_putnbr(nb / 10);: If true, it makes a recursive call with the tens place (i.e., nb divided by 10). 
	This continues until nb has only one digit left.

    Printing the Last Digit:
        ft_putchar ((nb % 10) + '0');: After reaching a single-digit number, this line converts the last digit to its ASCII 
	character by taking nb % 10 (which gives the last digit) and adding '0'. It then prints the last digit.

Português:

    Diretiva de Inclusão:
        Assume-se que o arquivo de cabeçalho necessário <unistd.h> está incluído para usar a função write().

    Função para Imprimir um Caractere:
        void ft_putchar(char c): Esta função recebe um caractere c como argumento e o escreve na saída padrão usando a 
	função write().
        write(1, &c, 1);: Esta linha envia o caractere c para o descritor de arquivo 1 (saída padrão, geralmente o terminal).

    Função para Imprimir um Inteiro:
        void ft_putnbr(int nb): Esta função recebe um inteiro nb como argumento e o imprime na saída padrão.

    Tratamento de Números Negativos:
        if (nb < 0): Esta condição verifica se nb é negativo.
        ft_putchar('-');: Se for verdadeiro, imprime um sinal de menos para indicar que o número é negativo.
        if (nb == -2147483648): Esta condição verifica o valor mínimo de um inteiro em um sistema de 32 bits, que é -2147483648.
            ft_putchar('2');: Como esse número não pode ser representado como um inteiro positivo, imprime 2 separadamente.
            nb = 147483648;: Isso modifica nb para 147483648 para permitir um processamento adicional.
        else { nb = -nb; }: Para outros números negativos, converte nb para positivo negando-o.

    Chamada Recursiva para Números Maiores:
        if (nb >= 10): Esta condição verifica se nb tem mais de um dígito.
        ft_putnbr(nb / 10);: Se for verdadeiro, faz uma chamada recursiva com a parte das dezenas (ou seja, 
	nb dividido por 10). Isso continua até que nb tenha apenas um dígito restante.

    Imprimindo o Último Dígito:
        ft_putchar ((nb % 10) + '0');: Após chegar a um número de um único dígito, esta linha converte o último dígito em seu 
	caractere ASCII tomando nb % 10 (que dá o último dígito) e adicionando '0'. Em seguida, imprime o último dígito.
