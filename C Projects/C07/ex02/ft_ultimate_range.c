#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	result = malloc(sizeof(int) * (i));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}



_______________________________________________________________________________________________
Explanation

Include Directives:
#include <stdlib.h>: This line includes the <stdlib.h> header file, which is necessary for using memory 
allocation functions like malloc().
#include <stdio.h>: This line includes the <stdio.h> header file, which is used for input and output functions like printf().

Function Declaration:
int ft_ultimate_range(int **range, int min, int max): This line declares the function ft_ultimate_range, which 
takes three arguments: a pointer to a pointer to an integer (int **range) and two integers (min and max). 
The function returns an integer.

Check for Invalid Range:
if (min >= max): This line checks if the value of min is greater than or equal to max.
*range = NULL;: If the condition is true, the pointer **range is set to NULL, indicating that there is no valid range.
return (0);: The function returns 0, indicating that no elements were allocated.

Calculate Size:
i = max - min;: This line calculates the size of the resulting array to be allocated, which is the difference between max and min.

Memory Allocation:
result = malloc(sizeof(int) * (i));: This line allocates enough memory for an integer array of size i (max - min).

Null Check:
if (result == NULL): This line checks if the memory allocation was successful.
*range = NULL;: If result is NULL, the pointer **range is set to NULL.
return (-1);: The function returns -1 to indicate a failure in memory allocation.

Assign the Result:
*range = result;: The pointer **range is set to point to the allocated array, allowing the function to return the result.

Fill the Array:
i = 0;: This line initializes the index i as 0.
while (max > min): This loop continues while max is greater than min.
result[i] = min;: Inside the loop, the value of min is assigned to the current position of the result array.
min++;: The value of min is incremented.
i++;: The index i is incremented to move to the next position in the array.

Return Statement:
return (i);: Finally, the function returns i, which represents the number of elements allocated in the array.



	Português

Diretivas de Inclusão:
#include <stdlib.h>: Esta linha inclui o arquivo de cabeçalho <stdlib.h>, que é necessário para usar funções de 
alocação de memória, como malloc().
#include <stdio.h>: Esta linha inclui o arquivo de cabeçalho <stdio.h>, que é usado para funções de entrada e saída, 
como printf().

Declaração da Função:
int ft_ultimate_range(int **range, int min, int max): Esta linha declara a função ft_ultimate_range, que recebe três 
argumentos: um ponteiro para um ponteiro de inteiro (int **range) e dois inteiros (min e max). A função retorna um inteiro.

Verificação de Intervalo Inválido:
if (min >= max): Esta linha verifica se o valor de min é maior ou igual a max.
*range = NULL;: Se a condição for verdadeira, o ponteiro **range é definido como NULL, indicando que não há intervalo válido.
return (0);: A função retorna 0, indicando que nenhum elemento foi alocado.

Cálculo do Tamanho:
i = max - min;: Esta linha calcula o tamanho do array resultante que será alocado, que é a diferença entre max e min.

Alocação de Memória:
result = malloc(sizeof(int) * (i));: Esta linha aloca memória suficiente para um array de inteiros do tamanho i (max - min).

Verificação de Nulo:
if (result == NULL): Esta linha verifica se a alocação de memória foi bem-sucedida.
*range = NULL;: Se result for NULL, o ponteiro **range é definido como NULL.
return (-1);: A função retorna -1 para indicar uma falha na alocação de memória.

Atribuição do Resultado:
*range = result;: O ponteiro **range é definido para apontar para o array alocado, permitindo que a função chame o resultado.

Preenchimento do Array:
i = 0;: Esta linha inicializa o índice i como 0.
while (max > min): Este loop continua enquanto max for maior que min.
result[i] = min;: Dentro do loop, o valor de min é atribuído à posição atual do array result.
min++;: O valor de min é incrementado.
i++;: O índice i é incrementado para passar para a próxima posição do array.

Instrução de Retorno:
return (i);: Finalmente, a função retorna i, que representa o número de elementos alocados no array.
