#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}



_______________________________________________________________________________________________
Explanation

Include Directives:
#include <stdlib.h>: Esta linha inclui o arquivo de cabeçalho <stdlib.h>, que é necessário para usar funções 
de alocação de memória como malloc().
#include <string.h>: Esta linha inclui o arquivo de cabeçalho <string.h>, que fornece funções para manipulação 
de strings.
#include <stdio.h>: Esta linha inclui o arquivo de cabeçalho <stdio.h>, que permite o uso de funções de entrada 
e saída, como printf().

Function Declaration:
char *ft_strdup(char *src): Esta linha declara a função ft_strdup, que recebe um único argumento, src, um ponteiro 
para a string fonte. A função retorna um ponteiro para uma nova string que é uma duplicata da string de entrada.

Length Calculation:
len = 0;: Esta linha inicializa len como 0.
while (src[len] != '\0'): Este loop calcula o comprimento da string fonte src, iterando através dela até alcançar o 
terminador nulo ('\0').
len++;: Dentro do loop, incrementa len até que todos os caracteres tenham sido contados.

Memory Allocation:
dest = (char *)malloc(sizeof(char) * (len + 1));: Esta linha aloca memória para a nova string dest. Ela aloca espaço 
suficiente para todos os caracteres em src, além de um byte adicional para o terminador nulo. O valor retornado por 
malloc() é convertido para um ponteiro de caractere.

Null Check:
if (dest == NULL): Esta linha verifica se a alocação de memória foi bem-sucedida.
return (NULL);: Se dest for NULL, a função retorna NULL para indicar uma falha na alocação.

String Copying:
i = 0;: Esta linha inicializa o índice i como 0.
while (src[i] != '\0'): Este loop copia os caracteres de src para dest um a um, até que o terminador nulo seja alcançado.
dest[i] = src[i];: Dentro do loop, o caractere atual de src é copiado para dest.
i++;: O índice i é incrementado para mover para o próximo caractere.

Null Termination of Destination String:
dest[i] = '\0';: Após copiar todos os caracteres, esta linha adiciona o terminador nulo ao final da nova string dest, 
garantindo que seja uma string válida em C.

Return Statement:
return (dest);: Finalmente, a função retorna o ponteiro para a nova string alocada e copiada, dest.

	
	
	Português:

Diretivas de Inclusão:
#include <stdlib.h>: Esta linha inclui o arquivo de cabeçalho <stdlib.h>, que é necessário para usar funções de alocação 
de memória como malloc().
#include <string.h>: Esta linha inclui o arquivo de cabeçalho <string.h>, que fornece funções para manipulação de strings.
#include <stdio.h>: Esta linha inclui o arquivo de cabeçalho <stdio.h>, que permite o uso de funções de entrada e saída, 
como printf().

Declaração da Função:
char *ft_strdup(char *src): Esta linha declara a função ft_strdup, que recebe um único argumento, src, um ponteiro para a 
string fonte. A função retorna um ponteiro para uma nova string que é uma duplicata da string de entrada.

Cálculo do Comprimento:
len = 0;: Esta linha inicializa len como 0.
while (src[len] != '\0'): Este loop calcula o comprimento da string fonte src, iterando através dela até alcançar o 
terminador nulo ('\0').
len++;: Dentro do loop, incrementa len até que todos os caracteres tenham sido contados.

Alocação de Memória:
dest = (char *)malloc(sizeof(char) * (len + 1));: Esta linha aloca memória para a nova string dest. Ela aloca espaço 
suficiente para todos os caracteres em src, além de um byte adicional para o terminador nulo. O valor retornado por malloc()
é convertido para um ponteiro de caractere.

Verificação de Nulo:
if (dest == NULL): Esta linha verifica se a alocação de memória foi bem-sucedida.
return (NULL);: Se dest for NULL, a função retorna NULL para indicar uma falha na alocação.

Cópia da String:
i = 0;: Esta linha inicializa o índice i como 0.
while (src[i] != '\0'): Este loop copia os caracteres de src para dest um a um, até que o terminador nulo seja alcançado.
dest[i] = src[i];: Dentro do loop, o caractere atual de src é copiado para dest.
i++;: O índice i é incrementado para mover para o próximo caractere.

Terminação Nula da String de Destino:
dest[i] = '\0';: Após copiar todos os caracteres, esta linha adiciona o terminador nulo ao final da nova string dest, 
garantindo que seja uma string válida em C.

Instrução de Retorno:
return (dest);: Finalmente, a função retorna o ponteiro para a nova string alocada e copiada, dest.
