#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *tab, int n)
{
	int		i;
	bool	low;

	i = 1;
	low = 1;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
			low = 0;
		i++;
	}
	if (low)
	{
		i = 0;
		while (i < n)
			ft_putchar(tab[i++] + 48);
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[n];

	i = 0;
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n >= 1 && n < 10)
	{
		print(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}



--- Explanation ---

    Include Directives:
        #include <unistd.h>: Includes the header for using the write() function.
        #include <stdbool.h>: Includes the header for using the bool type and its values (true, false).

    Function to Print a Character:
        void ft_putchar(char c): This function takes a character c as an argument and writes it to the standard output.
        write(1, &c, 1);: Sends the character c to the standard output (file descriptor 1).

    Function to Print Combinations:
        void print(int *tab, int n): This function takes an integer array tab and its size n as arguments to print 
	combinations of numbers in ascending order.
        Check Order:
            int i; bool low;: Declares variables i for iteration and low to check if the numbers are in ascending order.
            while (i < n): Loops through the array tab.
                if (tab[i - 1] >= tab[i]) low = 0;: Sets low to false if any number is not less than the next.
        Print Valid Combinations:
            if (low): If the combination is valid (in ascending order):
                i = 0; while (i < n): Loops through the array again to print the numbers.
                    ft_putchar(tab[i++] + 48);: Converts each integer to its character equivalent (by adding 48, the 
		    ASCII value for '0') and prints it.
                if (tab[0] < (10 - n)): If the first number is less than 10 - n, it prints a comma and a space to separate 
		combinations.

    Function to Generate Combinations:
        void ft_print_combn(int n): This function generates and prints all combinations of n different digits in ascending order.
        Initialization:
            int i; int tab[n];: Declares a variable i and an array tab of size n.
            while (i < n) tab[i++] = 0;: Initializes all elements of tab to 0.
        Generate Combinations:
            while (tab[0] <= (10 - n) && n >= 1 && n < 10): This loop continues until the first element of tab exceeds 10 - n or 
	    n is out of valid bounds (less than 1 or greater than or equal to 10).
                print(tab, n);: Calls the print() function to display the current combination.
                tab[n - 1]++;: Increments the last element of tab to explore new combinations.
                Adjusting Combinations:
                    i = n - 1; while (i && n > 1): Starts from the last element of tab and adjusts earlier elements if necessary.
                        if (tab[i] > 9): If an element exceeds 9:
                            tab[i - 1]++;: Increments the previous element.
                            tab[i] = 0;: Resets the current element to 0.
                        i--;: Decrements i to continue checking earlier elements.



	
Português:

    Diretivas de Inclusão:
        #include <unistd.h>: Inclui o cabeçalho para usar a função write().
        #include <stdbool.h>: Inclui o cabeçalho para usar o tipo bool e seus valores (true, false).

    Função para Imprimir um Caractere:
        void ft_putchar(char c): Esta função recebe um caractere c como argumento e o escreve na saída padrão.
        write(1, &c, 1);: Envia o caractere c para a saída padrão (descritor de arquivo 1).

    Função para Imprimir Combinações:
        void print(int *tab, int n): Esta função recebe um array de inteiros tab e seu tamanho n como argumentos para imprimir 
	combinações de números em ordem crescente.
        Verificar Ordem:
            int i; bool low;: Declara variáveis i para iteração e low para verificar se os números estão em ordem crescente.
            while (i < n): Loop que percorre o array tab.
                if (tab[i - 1] >= tab[i]) low = 0;: Define low como false se algum número não for menor que o seguinte.
        Imprimir Combinações Válidas:
            if (low): Se a combinação for válida (em ordem crescente):
                i = 0; while (i < n): Loop que percorre o array novamente para imprimir os números.
                    ft_putchar(tab[i++] + 48);: Converte cada inteiro em seu equivalente de caractere (adicionando 48, o 
		    valor ASCII para '0') e o imprime.
                if (tab[0] < (10 - n)): Se o primeiro número for menor que 10 - n, imprime uma vírgula e um espaço para 
		separar as combinações.

    Função para Gerar Combinações:
        void ft_print_combn(int n): Esta função gera e imprime todas as combinações de n dígitos diferentes em ordem crescente.
        Inicialização:
            int i; int tab[n];: Declara uma variável i e um array tab de tamanho n.
            while (i < n) tab[i++] = 0;: Inicializa todos os elementos de tab com 0.
        Gerar Combinações:
            while (tab[0] <= (10 - n) && n >= 1 && n < 10): Este loop continua até que o primeiro elemento de tab exceda 10 - n 
	    ou n esteja fora de limites válidos (menor que 1 ou maior ou igual a 10).
                print(tab, n);: Chama a função print() para exibir a combinação atual.
                tab[n - 1]++;: Incrementa o último elemento de tab para explorar novas combinações.
                Ajustando Combinações:
                    i = n - 1; while (i && n > 1): Começa do último elemento de tab e ajusta elementos anteriores se necessário.
                        if (tab[i] > 9): Se um elemento exceder 9:
                            tab[i - 1]++;: Incrementa o elemento anterior.
                            tab[i] = 0;: Redefine o elemento atual para 0.
                        i--;: Decrementa i para continuar verificando elementos anteriores.
