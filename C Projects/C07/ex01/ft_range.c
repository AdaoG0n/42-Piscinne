#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	result = (int *)malloc(sizeof(int) * (i));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}



_______________________________________________________________________________________________
Explanation

Include Directive:
#include <stdlib.h>: Esta linha inclui o arquivo de cabeçalho <stdlib.h>, que é necessário para usar funções de 
alocação de memória, como malloc().

Function Declaration:
int *ft_range(int min, int max): Esta linha declara a função ft_range, que recebe dois argumentos inteiros, min e max. 
	A função retorna um ponteiro para um array de inteiros.

Check for Invalid Range:
if (min >= max): Esta linha verifica se o valor de min é maior ou igual a max.
return (0);: Se esta condição for verdadeira, a função retorna 0, indicando que não há intervalo válido.

Calculate Size:
i = max - min;: Esta linha calcula o tamanho do array resultante que será alocado, que é a diferença entre max e min.

Memory Allocation:
result = (int *)malloc(sizeof(int) * (i));: Esta linha aloca memória suficiente para um array de inteiros do tamanho i 
	(max - min). O resultado de malloc() é convertido para um ponteiro de inteiro.

Null Check:
if (result == NULL): Esta linha verifica se a alocação de memória foi bem-sucedida.
return (NULL);: Se result for NULL, a função retorna NULL para indicar uma falha na alocação de memória.

Fill the Array:
i = 0;: Esta linha inicializa o índice i como 0.
while (max > min): Este loop continua enquanto max for maior que min.
result[i] = min;: Dentro do loop, o valor de min é atribuído à posição atual do array result.
min++;: O valor de min é incrementado.
i++;: O índice i é incrementado para passar para a próxima posição do array.

Return Statement:
return (result);: Finalmente, a função retorna o ponteiro para o array result preenchido com os valores de min até max - 1.

	
	
	Português:

Diretiva de Inclusão:
#include <stdlib.h>: Esta linha inclui o arquivo de cabeçalho <stdlib.h>, que é necessário para usar funções de alocação 
de memória, como malloc().

Declaração da Função:
int *ft_range(int min, int max): Esta linha declara a função ft_range, que recebe dois argumentos inteiros, min e max. 
	A função retorna um ponteiro para um array de inteiros.

Verificação de Intervalo Inválido:
if (min >= max): Esta linha verifica se o valor de min é maior ou igual a max.
return (0);: Se esta condição for verdadeira, a função retorna 0, indicando que não há intervalo válido.

Cálculo do Tamanho:
i = max - min;: Esta linha calcula o tamanho do array resultante que será alocado, que é a diferença entre max e min.

Alocação de Memória:
result = (int *)malloc(sizeof(int) * (i));: Esta linha aloca memória suficiente para um array de inteiros do tamanho i 
	(max - min). O resultado de malloc() é convertido para um ponteiro de inteiro.

Verificação de Nulo:
if (result == NULL): Esta linha verifica se a alocação de memória foi bem-sucedida.
return (NULL);: Se result for NULL, a função retorna NULL para indicar uma falha na alocação de memória.

Preenchimento do Array:
i = 0;: Esta linha inicializa o índice i como 0.
while (max > min): Este loop continua enquanto max for maior que min.
result[i] = min;: Dentro do loop, o valor de min é atribuído à posição atual do array result.
min++;: O valor de min é incrementado.
i++;: O índice i é incrementado para passar para a próxima posição do array.

Instrução de Retorno:
return (result);: Finalmente, a função retorna o ponteiro para o array result preenchido com os valores de min até max - 1.
