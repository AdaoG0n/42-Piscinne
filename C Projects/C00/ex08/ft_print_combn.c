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

English:

    #include <unistd.h>: //Includes the library to use the write() function.

    #include <stdbool.h>: //Includes the library to use the boolean data type (true and false).

    void ft_putchar(char c): //Declares the ft_putchar function, which takes a character as an argument and returns no values (void).

    write(1, &c, 1);: //Uses the write() function to send the character stored in c to the terminal (standard output).

    void print(int *tab, int n): //Declares the print function, which takes an integer array tab and its size n as arguments and returns no values (void).

    int i;: //Declares an integer variable i to be used as a loop counter.

    bool low;: //Declares a boolean variable low to track if the array is in ascending order.

    i = 1;: //Initializes i to 1.

    low = 1;: //Sets low to true initially, assuming the order is correct.

    while (i < n): //Starts a loop that goes through the elements of the array from the second element.

    if (tab[i - 1] >= tab[i]): //Checks if the current element is less than or equal to the previous one.

    low = 0;: //Sets low to false if the order is not ascending.

    i++;: //Increments i to move to the next element.

    if (low): //Checks if the array is in ascending order.

    i = 0;: //Resets i to 0 to print the numbers.

    while (i < n): //Starts a loop to print the elements of the array.

    ft_putchar(tab[i++] + 48);: //Converts the integer to a character and prints it.

    if (tab[0] < (10 - n)): //Checks if the first element allows for a comma and space.

    ft_putchar(',');: //Prints a comma.

    ft_putchar(' ');: //Prints a space.

    void ft_print_combn(int n): //Declares the ft_print_combn function, which takes an integer n as an argument and returns no values (void).

    int i;: //Declares an integer variable i.

    int tab[n];: //Declares an integer array tab of size n to hold the current combination.

    i = 0;: //Initializes i to 0.

    while (i < n): //Starts a loop to initialize the array.

    tab[i++] = 0;: //Sets each element of the array to 0.

    while (tab[0] <= (10 - n) && n >= 1 && n < 10): //Continues as long as the first element is within bounds and n is valid.

    print(tab, n);: //Calls the print function to display the current combination.

    tab[n - 1]++;: //Increments the last element to generate the next combination.

    i = n - 1;: //Initializes i to the last index of the array.

    while (i && n > 1): //Starts a loop that continues while there are elements to check.

    if (tab[i] > 9): //Checks if the current element exceeds 9.

    tab[i - 1]++;: //Increments the previous element if the current one is out of bounds.

    tab[i] = 0;: //Resets the current element to 0.

    i--;: //Decrements i to check the next element.





Português:

    #include <unistd.h>: //Inclui a biblioteca para usar a função write().

    #include <stdbool.h>: //Inclui a biblioteca para usar o tipo de dado booleano (true e false).

    void ft_putchar(char c): //Declaração da função ft_putchar, que aceita um caractere como argumento e não retorna valores (void).

    write(1, &c, 1);: //Usa a função write() para enviar o caractere armazenado em c para o terminal (saída padrão).

    void print(int *tab, int n): //Declara a função print, que aceita um array de inteiros tab e seu tamanho n como argumentos e não retorna valores (void).

    int i;: //Declara uma variável inteira i para ser usada como contador de loop.

    bool low;: //Declara uma variável booleana low para rastrear se o array está em ordem crescente.

    i = 1;: //Inicializa i com 1.

    low = 1;: //Define low como verdadeiro inicialmente, assumindo que a ordem está correta.

    while (i < n): //Inicia um loop que percorre os elementos do array a partir do segundo elemento.

    if (tab[i - 1] >= tab[i]): //Verifica se o elemento atual é menor ou igual ao anterior.

    low = 0;: //Define low como falso se a ordem não for crescente.

    i++;: //Incrementa i para passar para o próximo elemento.

    if (low): //Verifica se o array está em ordem crescente.

    i = 0;: //Reinicia i para 0 para imprimir os números.

    while (i < n): //Inicia um loop para imprimir os elementos do array.

    ft_putchar(tab[i++] + 48);: //Converte o inteiro em um caractere e o imprime.

    if (tab[0] < (10 - n)): //Verifica se o primeiro elemento permite uma vírgula e espaço.

    ft_putchar(',');: //Imprime uma vírgula.

    ft_putchar(' ');: //Imprime um espaço.

    void ft_print_combn(int n): //Declaração da função ft_print_combn, que aceita um inteiro n como argumento e não retorna valores (void).

    int i;: //Declara uma variável inteira i.

    int tab[n];: //Declara um array de inteiros tab de tamanho n para armazenar a combinação atual.

    i = 0;: //Inicializa i com 0.

    while (i < n): //Inicia um loop para inicializar o array.

    tab[i++] = 0;: //Define cada elemento do array como 0.

    while (tab[0] <= (10 - n) && n >= 1 && n < 10): //Continua enquanto o primeiro elemento estiver dentro dos limites e n for válido.

    print(tab, n);: //Chama a função print para exibir a combinação atual.

    tab[n - 1]++;: //Incrementa o último elemento para gerar a próxima combinação.

    i = n - 1;: //Inicializa i com o último índice do array.

    while (i && n > 1): //Inicia um loop que continua enquanto houver elementos a verificar.

    if (tab[i] > 9): //Verifica se o elemento atual excede 9.

    tab[i - 1]++;: //Incrementa o elemento anterior se o atual estiver fora dos limites.

    tab[i] = 0;: //Reseta o elemento atual para 0.

    i--;: //Decrementa i para verificar o próximo elemento.
