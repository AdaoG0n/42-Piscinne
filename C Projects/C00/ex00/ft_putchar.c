#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}




--- Explanation ---

    Include Directive:
        #include <unistd.h>: This line includes the <unistd.h> header file, which is necessary for using the write() function. 
	This function allows the program to write data to file descriptors, including standard output.

    Function Declaration:
        void ft_putchar(char c): This line declares a function named ft_putchar. The function takes one argument, c, which 
	is a character (char). The function does not return any value (void).

    Writing a Character:
        write(1, &c, 1): This line uses the write() function to output the character passed to ft_putchar. The parameters are:
            1: This indicates the file descriptor for standard output (the terminal).
            &c: This is the address of the character c that we want to write. The & operator is used to obtain the memory 
		address of the variable.
            1: This specifies that we want to write one byte, which is the size of the character c.


	
Português:

    Diretiva de Inclusão:
        #include <unistd.h>: Esta linha inclui o arquivo de cabeçalho <unistd.h>, que é necessário para usar a função write(). 
	Esta função permite que o programa escreva dados em descritores de arquivos, incluindo a saída padrão.

    Declaração da Função:
        void ft_putchar(char c): Esta linha declara uma função chamada ft_putchar. A função aceita um argumento, c, 
	que é um caractere (char). A função não retorna nenhum valor (void).

    Escrevendo um Caractere:
        write(1, &c, 1): Esta linha usa a função write() para enviar o caractere passado para ft_putchar. Os parâmetros são:
            1: Este indica o descritor de arquivo para a saída padrão (o terminal).
            &c: Este é o endereço do caractere c que queremos escrever. O operador & é usado para obter o 
		endereço de memória da variável.
            1: Este especifica que queremos escrever um byte, que é o tamanho do caractere c.
