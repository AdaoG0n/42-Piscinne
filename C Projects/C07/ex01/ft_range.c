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
#include <stdlib.h>: This line includes the <stdlib.h> header file, which is necessary for memory allocation functions 
like malloc().

Function Declaration:
int *ft_range(int min, int max): This line declares a function named ft_range that takes two integer arguments (min and max) 
and returns a pointer to an integer array.

Return Condition for Invalid Range:
if (min >= max): This condition checks if min is greater than or equal to max. If true, the function returns 0, indicating 
that no range can be created.

Calculate the Size of the Resulting Array:
i = max - min;: This line calculates the size of the array that needs to be allocated by subtracting min from max.

Memory Allocation:
result = (int *)malloc(sizeof(int) * (i));: This line allocates memory for an integer array of size i. If the allocation 
fails, it returns NULL.

Check for Successful Allocation:
if (result == NULL): This condition checks if the memory allocation was successful. If not, the function returns NULL.

Initialize Index for Filling Array:
i = 0;: This line initializes the index variable i to 0 for filling the array.

Fill the Array with Values from min to max:
while (max > min): This loop continues while max is greater than min.
result[i] = min;: This line assigns the current value of min to the result array at index i.
min++;: This line increments min to the next value.
i++;: This line increments the index i to move to the next position in the result array.

Return the Resulting Array:
return (result);: Finally, the function returns the pointer to the newly created array containing the range of values.


	Português

Diretiva de Inclusão:
#include <stdlib.h>: Esta linha inclui o arquivo de cabeçalho <stdlib.h>, que é necessário para funções de alocação de 
memória, como malloc().

Declaração da Função:
int *ft_range(int min, int max): Esta linha declara uma função chamada ft_range que recebe dois argumentos inteiros 
(min e max) e retorna um ponteiro para um array de inteiros.

Condição de Retorno para Intervalo Inválido:
if (min >= max): Esta condição verifica se min é maior ou igual a max. Se verdadeiro, a função retorna 0, indicando que 
nenhum intervalo pode ser criado.

Calcular o Tamanho do Array Resultante:
i = max - min;: Esta linha calcula o tamanho do array que precisa ser alocado subtraindo min de max.

Alocação de Memória:
result = (int *)malloc(sizeof(int) * (i));: Esta linha aloca memória para um array de inteiros de tamanho i. Se a alocação 
falhar, retorna NULL.

Verificar a Alocação Bem-Sucedida:
if (result == NULL): Esta condição verifica se a alocação de memória foi bem-sucedida. Se não, a função retorna NULL.

Inicializar Índice para Preencher o Array:
i = 0;: Esta linha inicializa a variável de índice i como 0 para preencher o array.

Preencher o Array com Valores de min a max:
while (max > min): Este loop continua enquanto max for maior que min.
result[i] = min;: Esta linha atribui o valor atual de min ao array result na posição de índice i.
min++;: Esta linha incrementa min para o próximo valor.
i++;: Esta linha incrementa o índice i para passar para a próxima posição no array result.

Retornar o Array Resultante:
return (result);: Por fim, a função retorna o ponteiro para o novo array criado contendo o intervalo de valores.
