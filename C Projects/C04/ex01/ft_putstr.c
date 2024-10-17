#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}



Explanation

Include Directive:
#include <unistd.h>:
This line includes the <unistd.h> header file, which is necessary for using the write() function. 
This function allows the program to write data to file descriptors, including standard output.

Function Declaration:
void ft_putstr(char *str):
This line declares a function named ft_putstr. The function takes one argument, str, which is a pointer to a character (char). 
The function does not return any value (void).

Character Iteration:
while (*str):
This loop continues until it reaches the null terminator ('\0') of the string.
    write(1, str, 1);:
	Inside the loop, the write() function is called to output one character at a time. The parameters are:

    1: This indicates the file descriptor for standard output (the terminal).
    str: This is the address of the character to be written, which points to the current character in the string.
    1: This specifies that one byte (the size of a character) is to be written.

Pointer Increment:
str++;:
After writing the current character, the pointer str is incremented to move to the next character in the string.

	
	
	Português:

Diretiva de Inclusão:
#include <unistd.h>:
Esta linha inclui o arquivo de cabeçalho <unistd.h>, que é necessário para usar a função write(). 
Esta função permite que o programa escreva dados em descritores de arquivos, incluindo a saída padrão.

Declaração da Função:
void ft_putstr(char *str):
Esta linha declara uma função chamada ft_putstr. A função aceita um argumento, str, que é um ponteiro para um caractere (char). 
A função não retorna nenhum valor (void).

Iteração sobre os Caracteres:
while (*str):
Este loop continua até alcançar o terminador nulo ('\0') da string.
    write(1, str, 1);:
	Dentro do loop, a função write() é chamada para enviar um caractere por vez. Os parâmetros são:

    1: Este indica o descritor de arquivo para a saída padrão (o terminal).
    str: Este é o endereço do caractere a ser escrito, que aponta para o caractere atual na string.
    1: Este especifica que um byte (o tamanho de um caractere) deve ser escrito.

Incremento do Ponteiro:
str++;:
Após escrever o caractere atual, o ponteiro str é incrementado para mover para o próximo caractere da string.
