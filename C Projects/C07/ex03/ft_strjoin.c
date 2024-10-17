#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}



_______________________________________________________________________________________________
Explanation

Include Directives:
#include <stdlib.h>: This line includes the <stdlib.h> header file, which is necessary for 
memory allocation functions like malloc().
#include <stdio.h>: This line includes the <stdio.h> header file, which is often used for input and output functions.

Function Declaration:
char *ft_strjoin(int size, char **strs, char *sep): This line declares the function ft_strjoin, which takes three 
parameters: an integer (size), a pointer to an array of strings (char **strs), and a string (char *sep). The function 
returns a pointer to a string.

Memory Allocation for Resulting String:
s = malloc(sizeof(strs));: This line attempts to allocate memory for the resulting string. However, it incorrectly uses 
sizeof(strs), which gives the size of the pointer, not the total size needed for the concatenated string.

Initialization:
i = 0;: This line initializes the index variable i to 0.
c = 0;: This line initializes the index variable c, which will track the current position in the resulting string.

Outer Loop (Iterate through strs):
while (i < size): This loop continues as long as i is less than size, iterating through each string in the array.

Inner Loop (Copy Characters from strs[i]):
j = 0;: This line initializes the index variable j to 0 for copying characters from the current string.
while (strs[i][j] != '\0'): This loop continues until the end of the current string is reached.
s[c++] = strs[i][j++];: The character from strs[i] is copied to the resulting string s at the current position c, and 
both c and j are incremented.

Add Separator:
j = 0;: This line resets j to 0 to prepare for copying the separator.
while (sep[j] != '\0' && i != size - 1): This loop copies the separator string to the resulting string s only if the 
current string is not the last one.
s[c++] = sep[j++];: The separator character is copied to the resulting string at position c.

Increment Outer Loop Index:
i++;: This line increments the outer loop index to move to the next string in strs.

Null Terminator:
s[c] = '\0';: This line adds the null terminator to the end of the resulting string to mark the end of the string.

Return Statement:
return (s);: The function returns the pointer to the newly concatenated string.


	Português

Diretivas de Inclusão:
#include <stdlib.h>: Esta linha inclui o arquivo de cabeçalho <stdlib.h>, que é necessário para funções de alocação de 
memória, como malloc().
#include <stdio.h>: Esta linha inclui o arquivo de cabeçalho <stdio.h>, que é frequentemente usado para funções de entrada 
e saída.

Declaração da Função:
char *ft_strjoin(int size, char **strs, char *sep): Esta linha declara a função ft_strjoin, que recebe três parâmetros: 
um inteiro (size), um ponteiro para um array de strings (char **strs) e uma string (char *sep). A função retorna um 
ponteiro para uma string.

Alocação de Memória para a String Resultante:
s = malloc(sizeof(strs));: Esta linha tenta alocar memória para a string resultante. No entanto, usa incorretamente 
sizeof(strs), que retorna o tamanho do ponteiro, não o tamanho total necessário para a string concatenada.

Inicialização:
i = 0;: Esta linha inicializa a variável de índice i como 0.
c = 0;: Esta linha inicializa a variável de índice c, que rastreará a posição atual na string resultante.

Loop Externo (Iterar através de strs):
while (i < size): Este loop continua enquanto i for menor que size, iterando através de cada string no array.

Loop Interno (Copiar Caracteres de strs[i]):
j = 0;: Esta linha inicializa a variável de índice j como 0 para copiar caracteres da string atual.
while (strs[i][j] != '\0'): Este loop continua até o final da string atual ser atingido.
s[c++] = strs[i][j++];: O caractere de strs[i] é copiado para a string resultante s na posição atual c, e tanto c quanto j
são incrementados.

Adicionar Separador:
j = 0;: Esta linha redefine j como 0 para preparar a cópia do separador.
while (sep[j] != '\0' && i != size - 1): Este loop copia a string separadora para a string resultante s somente se a string 
atual não for a última.
s[c++] = sep[j++];: O caractere do separador é copiado para a string resultante na posição c.

Incrementar Índice do Loop Externo:
i++;: Esta linha incrementa o índice do loop externo para passar para a próxima string em strs.

Terminador Nulo:
s[c] = '\0';: Esta linha adiciona o terminador nulo ao final da string resultante para marcar o final da string.

Instrução de Retorno:
return (s);: A função retorna o ponteiro para a nova string concatenada.
