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




Explanation

Include Directive:
#include <unistd.h>:
This line includes the <unistd.h> header file, which is necessary for using the write() function. 
This function allows the program to write data to file descriptors, including standard output.

Function Declaration:
void ft_putchar(char c):
This function takes a character c as input and writes it to standard output using the write() function. 
It does not return any value (void).

Writing a Character:
write(1, &c, 1):
This line uses the write() function to output the character passed to ft_putchar. The parameters are:

    1: This indicates the file descriptor for standard output (the terminal).
    &c: This is the address of the character c that we want to write. The & operator is used to obtain the 
	memory address of the variable.
    1: This specifies that we want to write one byte, which is the size of the character c.

Function Declaration:
void ft_putnbr(int nb):
This line declares a function named ft_putnbr that takes an integer nb as input and prints it to standard output. 
The function does not return any value (void).

Handling Negative Numbers:
if (nb < 0):
This condition checks if the number is negative. If it is:

    ft_putchar('-');: The function ft_putchar is called to print the negative sign.
    if (nb == -2147483648): This condition checks for the minimum integer value in a 32-bit signed integer. 
	If true, it handles the special case by printing '2' and adjusting nb to 147483648 (to avoid overflow when negating).
    nb = -nb;: For other negative numbers, this line converts nb to positive.

Recursive Call for Higher Digits:
if (nb >= 10):
This condition checks if the number is greater than or equal to 10. If true:

    ft_putnbr(nb / 10);: This line recursively calls ft_putnbr to print the digits to the left of the least significant digit.

Printing the Last Digit:
ft_putchar((nb % 10) + '0');:
After handling all higher digits, this line prints the last digit by taking the remainder of nb divided by 10 and 
converting it to its corresponding character by adding '0'.

	
	
	
	Português:

Diretiva de Inclusão:
#include <unistd.h>:
Esta linha inclui o arquivo de cabeçalho <unistd.h>, que é necessário para usar a função write(). 
Esta função permite que o programa escreva dados em descritores de arquivos, incluindo a saída padrão.

Declaração da Função:
void ft_putchar(char c):
Esta função aceita um caractere c como entrada e o escreve na saída padrão usando a função write(). 
Ela não retorna nenhum valor (void).

Escrevendo um Caractere:
write(1, &c, 1):
Esta linha usa a função write() para enviar o caractere passado para ft_putchar. Os parâmetros são:

    1: Este indica o descritor de arquivo para a saída padrão (o terminal).
    &c: Este é o endereço do caractere c que queremos escrever. O operador & é usado para obter o endereço de 
	memória da variável.
    1: Este especifica que queremos escrever um byte, que é o tamanho do caractere c.

Declaração da Função:
void ft_putnbr(int nb):
Esta linha declara uma função chamada ft_putnbr que aceita um inteiro nb como entrada e o imprime na saída padrão. 
A função não retorna nenhum valor (void).

Tratamento de Números Negativos:
if (nb < 0):
Esta condição verifica se o número é negativo. Se for:

    ft_putchar('-');: A função ft_putchar é chamada para imprimir o sinal negativo.
    if (nb == -2147483648): Esta condição verifica se o número é o valor mínimo de um inteiro em 32 bits. Se for verdade, 
	trata-se do caso especial imprimindo '2' e ajustando nb para 147483648 (para evitar estouro ao negar).
    nb = -nb;: Para outros números negativos, esta linha converte nb para positivo.

Chamada Recursiva para Dígitos Superiores:
if (nb >= 10):
Esta condição verifica se o número é maior ou igual a 10. Se for verdade:

    ft_putnbr(nb / 10);: Esta linha chama recursivamente ft_putnbr para imprimir os dígitos à esquerda do dígito menos 
    significativo.

Imprimindo o Último Dígito:
ft_putchar((nb % 10) + '0');:
Após lidar com todos os dígitos superiores, esta linha imprime o último dígito, pegando o resto de nb dividido por 10 e 
convertendo-o para seu caractere correspondente ao adicionar '0'.
