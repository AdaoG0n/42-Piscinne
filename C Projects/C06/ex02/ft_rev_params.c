#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc - 1;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
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

Variable Initialization:
int i;
int j;
This declares two integer variables i and j. j is initialized to argc - 1, which points to the last argument 
(excluding the program name) to start printing in reverse order.

Outer Loop for Arguments:
while (j > 0)
    {
This loop continues until all arguments have been processed in reverse order. It starts with j equal to the 
last argument index.

Inner Loop for Characters:
while (argv[j][i] != '\0')
    {
        write(1, &argv[j][i], 1);
        i++;
This nested loop iterates over each character of the current argument (argv[j]). The write() function is 
called to output each character one by one until the null terminator ('\0') is reached.

Writing a Newline:
write(1, "\n", 1);
After printing the current argument, this line writes a newline character to the output for better readability.

Decrementing the Argument Index:
j--;
After processing the current argument, j is decremented to move to the previous argument.

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
Este é o ponto de entrada do programa. Ele aceita dois parâmetros: argc, a contagem de argumentos (número 
de argumentos da linha de comando), e argv, um array de strings (ponteiros de caracteres) contendo os argumentos reais.

Inicialização de Variáveis:
int i;
int j;
Isso declara duas variáveis inteiras i e j. j é inicializada em argc - 1, que aponta para o último argumento 
(excluindo o nome do programa) para começar a impressão em ordem inversa.

Loop Externo para Argumentos:
while (j > 0)
    {
Este loop continua até que todos os argumentos tenham sido processados em ordem inversa. Começa com j igual ao 
índice do último argumento.

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

Decrementando o Índice do Argumento:
j--;
Após processar o argumento atual, j é decrementado para mover para o argumento anterior.

Instrução de Retorno:
return (0);
A função retorna 0, indicando a execução bem-sucedida do programa.
