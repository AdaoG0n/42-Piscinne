#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int		j;
	int		x;

	x = 1;
	while (x < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		x++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}



_______________________________________________________________________________________________
Explanation

Include Directive:
#include <unistd.h>
This line includes the <unistd.h> header file, which is necessary for using the write() function. 
	This function allows the program to write data to file descriptors, including standard output.

Function Declaration - ft_putchar:
void ft_putchar(char c):
This function takes a character c as an argument and writes it to standard output using the write() function.

Function Declaration - ft_putstr:
void ft_putstr(char *str):
This function takes a string str as an argument and prints it character by character. It uses a loop to call 
ft_putchar for each character until it reaches the null terminator ('\0').

Function Declaration - ft_strcmp:
int ft_strcmp(char *s1, char *s2):
This function compares two strings s1 and s2. It iterates through both strings character by character, checking 
for equality. If a difference is found, it returns the difference between the ASCII values of the first differing 
characters. If both strings are identical, it returns 0.

Function Declaration - ft_swap:
void ft_swap(char **a, char **b):
This function swaps the pointers to two strings, a and b. It uses a temporary pointer tmp to facilitate the swap.

Function Declaration - main:
int main(int argc, char **argv):
This is the entry point of the program. It takes two parameters: argc, the argument count, and argv, an array of 
strings containing the actual arguments.

Bubble Sort Logic:
int j;
int x;
x = 1;
This initializes the loop variables j and x, starting x at 1 to skip the program name in the command-line arguments.

Outer Loop:
while (x < argc - 1)
    {
This loop continues until all arguments are sorted.

Inner Loop:
j = 1;
while (j < argc - 1)
    {
This loop compares adjacent strings. If ft_strcmp indicates that the first string is greater than the second, it 
	swaps them using ft_swap.

Print Sorted Arguments:
j = 1;
while (j < argc)
    {
After sorting, this loop iterates through the sorted arguments and prints each one using ft_putstr, followed by 
a newline character using ft_putchar.

Return Statement:
return (0);
The function returns 0, indicating successful execution of the program.

	
	
	Português:

Diretiva de Inclusão:
#include <unistd.h>
Esta linha inclui o arquivo de cabeçalho <unistd.h>, que é necessário para usar a função write(). Esta função 
permite que o programa escreva dados em descritores de arquivos, incluindo a saída padrão.

Declaração da Função - ft_putchar:
void ft_putchar(char c):
Esta função aceita um caractere c como argumento e o escreve na saída padrão usando a função write().

Declaração da Função - ft_putstr:
void ft_putstr(char *str):
Esta função aceita uma string str como argumento e a imprime caractere por caractere. Ela usa um loop para chamar 
ft_putchar para cada caractere até que o terminador nulo ('\0') seja alcançado.

Declaração da Função - ft_strcmp:
int ft_strcmp(char *s1, char *s2):
Esta função compara duas strings s1 e s2. Ela itera através de ambas as strings caractere por caractere, verificando 
a igualdade. Se uma diferença for encontrada, ela retorna a diferença entre os valores ASCII dos primeiros caracteres 
diferentes. Se ambas as strings forem idênticas, retorna 0.

Declaração da Função - ft_swap:
void ft_swap(char **a, char **b):
Esta função troca os ponteiros de duas strings, a e b. Ela usa um ponteiro temporário tmp para facilitar a troca.

Declaração da Função - main:
int main(int argc, char **argv):
Este é o ponto de entrada do programa. Ele aceita dois parâmetros: argc, a contagem de argumentos, e argv, um array de 
strings contendo os argumentos reais.

Lógica do Bubble Sort:
int j;
int x;
x = 1;
Isso inicializa as variáveis do loop j e x, começando x em 1 para ignorar o nome do programa nos argumentos da linha de 
comando.

Loop Externo:
while (x < argc - 1)
    {
Este loop continua até que todos os argumentos sejam ordenados.

Loop Interno:
j = 1;
while (j < argc - 1)
    {
Este loop compara strings adjacentes. Se ft_strcmp indicar que a primeira string é maior que a segunda, elas são trocadas 
usando ft_swap.

Imprimir Argumentos Ordenados:
j = 1;
while (j < argc)
    {
Após a ordenação, este loop itera pelos argumentos ordenados e imprime cada um usando ft_putstr, seguido por um caractere 
de nova linha usando ft_putchar.

Instrução de Retorno:
return (0);
A função retorna 0, indicando a execução bem-sucedida do programa.
