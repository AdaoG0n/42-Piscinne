#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 0)
	{
		i = 0;
		while (argv[0][i] != '\0')
		{
			write (1, &argv[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}



_______________________________________________________________________________________________
Explanation

Include Directive:
#include <unistd.h>
This line includes the <unistd.h> header file, which is necessary for using the write() function. 
	This function allows the program to write data to file descriptors, including standard output.

Function Declaration:
int main(int argc, char **argv):
This is the entry point of the program. It takes two parameters: argc, the argument count (number of 
command-line arguments), and argv, an array of strings (character pointers) containing the actual arguments.

Argument Check:
if (argc > 0)
    {
        i = 0;
This checks if there are any command-line arguments passed to the program. The condition argc > 0 will 
	always be true since the program name is counted as the first argument.

Iterating Over the Program Name:
while (argv[0][i] != '\0')
    {
        write (1, &argv[0][i], 1);
        i++;
This loop iterates over each character of the program name (argv[0]). The write() function is called to output 
each character one by one until the null terminator ('\0') is reached.

Writing a Newline:
write(1, "\n", 1);
After printing the program name, this line writes a newline character to the output for better readability.

Return Statement:
return (0);
The function returns 0, indicating successful execution of the program.

	
	
	Português:

Diretiva de Inclusão:
#include <unistd.h>
Esta linha inclui o arquivo de cabeçalho <unistd.h>, que é necessário para usar a função write(). 
Esta função permite que o programa escreva dados em descritores de arquivos, incluindo a saída padrão.

Declaração da Função:
int main(int argc, char **argv):
Este é o ponto de entrada do programa. Ele aceita dois parâmetros: argc, a contagem de argumentos (número de 
argumentos da linha de comando), e argv, um array de strings (ponteiros de caracteres) contendo os argumentos reais.

Verificação de Argumentos:
if (argc > 0)
    {
        i = 0;
Isso verifica se há algum argumento da linha de comando passado para o programa. A condição argc > 0 sempre será 
verdadeira, uma vez que o nome do programa é contado como o primeiro argumento.

Iterando Sobre o Nome do Programa:
while (argv[0][i] != '\0')
    {
        write (1, &argv[0][i], 1);
        i++;
Este loop itera sobre cada caractere do nome do programa (argv[0]). A função write() é chamada para exibir cada 
caractere um por um até que o terminador nulo ('\0') seja alcançado.

Escrevendo uma Nova Linha:
write(1, "\n", 1);
Após imprimir o nome do programa, esta linha escreve um caractere de nova linha na saída para melhor legibilidade.

Instrução de Retorno:
return (0);
A função retorna 0, indicando a execução bem-sucedida do programa.
