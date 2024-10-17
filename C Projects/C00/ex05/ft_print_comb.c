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


_______________________________________________________________________________________________
--- Explanation ---

    Include Directive:
        Assumes the necessary header file <unistd.h> is included for using the write() function.

    Function Declaration:
        void ft_print_comb(void): This line declares a function named ft_print_comb. 
	The function does not take any arguments and does not return any value (void).

    Variable Declarations:
        int a;, int b;, int c;: These lines declare three integer variables named a, b, and c. 
	These variables will represent the digits of the combinations.

    Initializing Variable a:
        a = '0';: This line initializes the variable a with the ASCII value of the character '0'.

    Outer While Loop:
        while (a <= '7'): This line starts a loop that continues as long as a is less than or equal to '7'. 
	This ensures that valid three-digit combinations can be generated without repeating digits.

    Inner Loop for Variable b:
        b = a + 1;: This line initializes b to the next value after a, ensuring b will always be greater than a.
        while (b <= '8'): This loop continues as long as b is less than or equal to '8'. This ensures there is 
	still a valid digit for c that can be generated after b.

    Innermost Loop for Variable c:
        c = b + 1;: This line initializes c to the next value after b, ensuring c will always be greater than b.
        while (c <= '9'): This loop continues as long as c is less than or equal to '9'. This ensures that the combinations 
	will not exceed the digit 9.

    Writing the Combination:
        write(1, &a, 1);, write(1, &b, 1);, write(1, &c, 1);: These lines use the write() function to output the current 
	values of a, b, and c as characters to the standard output. Each digit is printed in order.

    Conditional Comma and Space:
        if (a != '7' || b != '8' || c != '9'): This condition checks if the current combination is not the last one ("789"). 
	If true, it proceeds to the next line to print a comma and space after the combination.
        write(1, ", ", 2);: This line writes the characters ", " to separate the combinations, except after the last combination.

    Incrementing c:
        c++;: This line increments the value of c to generate the next digit for the combination.

    Incrementing b:
        b++;: After finishing the innermost loop, this line increments b to generate the next possible digit combination with a.

    Incrementing a:
        a++;: Finally, this line increments a to generate the next starting digit for the combination.



	
Português:

    Diretiva de Inclusão:
        Assume-se que o arquivo de cabeçalho necessário <unistd.h> está incluído para usar a função write().

    Declaração da Função:
        void ft_print_comb(void): Esta linha declara uma função chamada ft_print_comb. A função não aceita argumentos e 
	não retorna nenhum valor (void).

    Declarações de Variáveis:
        int a;, int b;, int c;: Estas linhas declaram três variáveis inteiras chamadas a, b e c. Essas variáveis 
	representarão os dígitos das combinações.

    Inicializando a Variável a:
        a = '0';: Esta linha inicializa a variável a com o valor ASCII do caractere '0'.

    Laço While Externo:
        while (a <= '7'): Esta linha inicia um loop que continua enquanto a for menor ou igual a '7'. 
	Isso garante que combinações válidas de três dígitos possam ser geradas sem repetir dígitos.

    Loop Interno para a Variável b:
        b = a + 1;: Esta linha inicializa b com o próximo valor após a, garantindo que b será sempre maior que a.
        while (b <= '8'): Este loop continua enquanto b for menor ou igual a '8'. Isso garante que ainda haja um 
	dígito válido para c que pode ser gerado após b.

    Loop mais Interno para a Variável c:
        c = b + 1;: Esta linha inicializa c com o próximo valor após b, garantindo que c será sempre maior que b.
        while (c <= '9'): Este loop continua enquanto c for menor ou igual a '9'. Isso garante que as combinações não 
	excederão o dígito 9.

    Escrevendo a Combinação:
        write(1, &a, 1);, write(1, &b, 1);, write(1, &c, 1);: Estas linhas usam a função write() para enviar os valores 
	atuais de a, b e c como caracteres para a saída padrão. Cada dígito é impresso em ordem.

    Vírgula e Espaço Condicional:
        if (a != '7' || b != '8' || c != '9'): Esta condição verifica se a combinação atual não é a última ("789"). 
	Se verdadeira, executa a linha seguinte para imprimir uma vírgula e um espaço após a combinação.
        write(1, ", ", 2);: Esta linha escreve os caracteres ", " para separar as combinações, exceto após a última combinação.

    Incrementando c:
        c++;: Esta linha incrementa o valor de c para gerar o próximo dígito da combinação.

    Incrementando b:
        b++;: Após terminar o loop mais interno, esta linha incrementa b para gerar a próxima possível combinação de dígitos 
	com a.

    Incrementando a:
        a++;: Finalmente, esta linha incrementa a para gerar o próximo dígito inicial para a combinação.
