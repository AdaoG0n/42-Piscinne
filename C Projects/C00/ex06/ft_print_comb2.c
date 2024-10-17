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

    Include Directive:
        Assumes the necessary header file <unistd.h> is included for using the write() function.

    Function to Print a Character:
        void ft_putchar(char c): This function takes a character as an argument and writes it to the standard output 
	using the write() function.
        write(1, &c, 1);: This line writes the character c to file descriptor 1, which is the standard output (usually 
	the terminal).

    Function to Print a Number:
        void ft_print_number(int n): This function takes an integer n as an argument and prints it as two separate 
	characters (digits) to the standard output.
        ft_putchar((n / 10) + '0');: This line converts the tens place of the integer to its corresponding ASCII 
	character and prints it.
        ft_putchar((n % 10) + '0');: This line converts the units place of the integer to its corresponding ASCII 
	character and prints it.

    Function to Print Combinations of Two Numbers:
        void ft_print_comb2(void): This function does not take any arguments and prints all combinations of two numbers 
	from 00 to 99.

    Outer Loop for First Number:
        int first;: This declares an integer variable first to represent the first number in the combination.
        first = 0;: This initializes first to 0, the starting point for the combinations.
        while (first <= 98): This loop continues as long as first is less than or equal to 98. This ensures that second 
	will have a valid value when calculated.

    Inner Loop for Second Number:
        int second;: This declares an integer variable second to represent the second number in the combination.
        second = first + 1;: This initializes second to be one more than first, ensuring that it is always greater than first.
        while (second <= 99): This loop continues as long as second is less than or equal to 99, allowing combinations 
	from 0 to 99.

    Printing the Combination:
        ft_print_number(first);: This line calls the function ft_print_number to print the current value of first.
        ft_putchar(' ');: This line prints a space between the two numbers.
        ft_print_number(second);: This line calls the function ft_print_number to print the current value of second.

    Conditional Comma and Space:
        if (first != 98 || second != 99): This condition checks if the current combination is not the last one ("98 99"). 
	If true, it proceeds to print a comma and space.
        ft_putchar(',');: This line prints a comma after the combination.
        ft_putchar(' ');: This line prints a space after the comma.

    Incrementing Second Number:
        second++;: This line increments second to generate the next valid number in the inner loop.

    Incrementing First Number:
        first++;: After finishing the inner loop, this line increments first to generate the next starting number 
	for the combination.

Português:

    Diretiva de Inclusão:
        Assume-se que o arquivo de cabeçalho necessário <unistd.h> está incluído para usar a função write().

    Função para Imprimir um Caractere:
        void ft_putchar(char c): Esta função recebe um caractere como argumento e o escreve na saída padrão usando a 
	função write().
        write(1, &c, 1);: Esta linha escreve o caractere c no descritor de arquivo 1, que é a saída padrão (geralmente o 
	terminal).

    Função para Imprimir um Número:
        void ft_print_number(int n): Esta função recebe um inteiro n como argumento e o imprime como dois caracteres (dígitos) 
	separados na saída padrão.
        ft_putchar((n / 10) + '0');: Esta linha converte a dezena do inteiro no caractere ASCII correspondente e o imprime.
        ft_putchar((n % 10) + '0');: Esta linha converte a unidade do inteiro no caractere ASCII correspondente e o imprime.

    Função para Imprimir Combinações de Dois Números:
        void ft_print_comb2(void): Esta função não aceita argumentos e imprime todas as combinações de dois números de 00 a 99.

    Laço Externo para o Primeiro Número:
        int first;: Declara uma variável inteira first para representar o primeiro número da combinação.
        first = 0;: Inicializa first como 0, o ponto de partida para as combinações.
        while (first <= 98): Este loop continua enquanto first for menor ou igual a 98. Isso garante que second terá um 
	valor válido quando calculado.

    Laço Interno para o Segundo Número:
        int second;: Declara uma variável inteira second para representar o segundo número da combinação.
        second = first + 1;: Inicializa second como um a mais que first, garantindo que seja sempre maior que first.
        while (second <= 99): Este loop continua enquanto second for menor ou igual a 99, permitindo combinações de 0 a 99.

    Imprimindo a Combinação:
        ft_print_number(first);: Esta linha chama a função ft_print_number para imprimir o valor atual de first.
        ft_putchar(' ');: Esta linha imprime um espaço entre os dois números.
        ft_print_number(second);: Esta linha chama a função ft_print_number para imprimir o valor atual de second.

    Vírgula e Espaço Condicional:
        if (first != 98 || second != 99): Esta condição verifica se a combinação atual não é a última ("98 99"). 
	Se verdadeira, prossegue para imprimir uma vírgula e um espaço.
        ft_putchar(',');: Esta linha imprime uma vírgula após a combinação.
        ft_putchar(' ');: Esta linha imprime um espaço após a vírgula.

    Incrementando o Segundo Número:
        second++;: Esta linha incrementa second para gerar o próximo número válido no loop interno.

    Incrementando o Primeiro Número:
        first++;: Após terminar o loop interno, esta linha incrementa first para gerar o próximo número inicial para a 
	combinação.

