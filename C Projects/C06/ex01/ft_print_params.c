#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
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

Function Declaration:
int main(int argc, char **argv):
This is the entry point of the program. It takes two parameters: argc, the argument count (number of command-line arguments), 
and argv, an array of strings (character pointers) containing the actual arguments.

Variable Initialization:
int i;
int j;
This declares two integer variables i and j. j is initialized to 1, which will be used to iterate over the command-line 
arguments starting from the first argument (the second overall, since the first is the program name).

Outer Loop for Arguments:
while (j < argc)
    {
        i = 0;
This loop continues until all arguments have been processed. It starts with j equal to 1 to skip the program name (argv[0]).

Inner Loop for Characters:
while (argv[j][i] != '\0')
    {
        write(1, &argv[j][i], 1);
        i++;
This nested loop iterates over each character of the current argument (argv[j]). The write() function is called to 
output each character one by one until the null terminator ('\0') is reached.

Writing a Newline:
write(1, "\n", 1);
After printing the current argument, this line writes a newline character to the output for better readability.

Incrementing the Argument Index:
j++;
After processing the current argument, j is incremented to move to the next argument.

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

Inicialização de Variáveis:
int i;
int j;
Isso declara duas variáveis inteiras i e j. j é inicializada em 1, que será usada para iterar sobre os argumentos 
da linha de comando, começando pelo primeiro argumento (o segundo no total, uma vez que o primeiro é o nome do programa).

Loop Externo para Argumentos:
while (j < argc)
    {
        i = 0;
Este loop continua até que todos os argumentos tenham sido processados. Começa com j igual a 1 para pular o nome 
do programa (argv[0]).

Loop Interno para Caracteres:
while (argv[j][i] != '\0')
    {
        write(1, &argv[j][i], 1);
        i++;
Este loop aninhado itera sobre cada caractere do argumento atual (argv[j]). A função write() é chamada para exibir 
cada caractere um por um até que o terminador nulo ('\0') seja alcançado.

Escrevendo uma Nova Linha:
write(1, "\n", 1);
Após imprimir o argumento atual, esta linha escreve um caractere de nova linha na saída para melhor legibilidade.

Incrementando o Índice do Argumento:
j++;
Após processar o argumento atual, j é incrementado para mover para o próximo argumento.

Instrução de Retorno:
return (0);
A função retorna 0, indicando a execução bem-sucedida do programa.
