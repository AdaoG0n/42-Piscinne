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
#include <stdlib.h>: This line includes the <stdlib.h> header file, necessary for memory allocation functions like malloc().
#include <string.h>: This line includes the <string.h> header file, which is necessary for string handling functions, 
though it is not directly used in this function.
#include <stdio.h>: This line includes the <stdio.h> header file, which is often used for input/output functions, though 
it is not directly utilized in this function.

Function Declaration:
char *ft_strdup(char *src): This line declares a function named ft_strdup that takes a string (character pointer) as an 
argument and returns a pointer to a newly allocated string.

Initialize Length Counter:
int len = 0;: This line initializes a variable len to 0 to count the length of the input string src.

Calculate Length of the Source String:
while (src[len] != '\0'): This loop increments len until it reaches the null terminator of the string, effectively 
calculating the length of src.

Allocate Memory for the Duplicate String:
dest = (char *)malloc(sizeof(char) * (len + 1));: This line allocates memory for the new string, which requires len 
characters plus one additional byte for the null terminator.

Check for Successful Memory Allocation:
if (dest == NULL): This condition checks if the memory allocation was successful. If it fails, the function returns NULL.

Copy Source String to Destination:
i = 0;: This line initializes an index variable i to 0 for copying the characters from src to dest.
while (src[i] != '\0'): This loop continues until the null terminator of src is reached.
dest[i] = src[i];: This line copies the character from src to dest at the same index.
i++;: This line increments the index i to move to the next character.

Add Null Terminator to the Duplicate String:
dest[i] = '\0';: After the loop, this line adds a null terminator to the end of the dest string to properly terminate it.

Return the Duplicate String:
return (dest);: Finally, the function returns a pointer to the newly created duplicate string.

	
	
	Português

Diretivas de Inclusão:
#include <stdlib.h>: Esta linha inclui o arquivo de cabeçalho <stdlib.h>, que é necessário para funções de alocação de 
memória, como malloc().
#include <string.h>: Esta linha inclui o arquivo de cabeçalho <string.h>, que é necessário para funções de manipulação de 
strings, embora não seja utilizado diretamente nesta função.
#include <stdio.h>: Esta linha inclui o arquivo de cabeçalho <stdio.h>, que é frequentemente usado para funções de 
entrada/saída, embora não seja utilizado diretamente nesta função.

Declaração da Função:
char *ft_strdup(char *src): Esta linha declara uma função chamada ft_strdup que recebe uma string (ponteiro para caractere) 
como argumento e retorna um ponteiro para uma nova string alocada.

Inicializar Contador de Comprimento:
int len = 0;: Esta linha inicializa uma variável len como 0 para contar o comprimento da string de entrada src.

Calcular o Comprimento da String Fonte:
while (src[len] != '\0'): Este loop incrementa len até alcançar o terminador nulo da string, calculando efetivamente o 
comprimento de src.

Alocar Memória para a String Duplicada:
dest = (char *)malloc(sizeof(char) * (len + 1));: Esta linha aloca memória para a nova string, que requer len caracteres 
mais um byte adicional para o terminador nulo.

Verificar a Alocação de Memória Bem-Sucedida:
if (dest == NULL): Esta condição verifica se a alocação de memória foi bem-sucedida. Se falhar, a função retorna NULL.

Copiar a String Fonte para a Destino:
i = 0;: Esta linha inicializa uma variável de índice i como 0 para copiar os caracteres de src para dest.
while (src[i] != '\0'): Este loop continua até que o terminador nulo de src seja alcançado.
dest[i] = src[i];: Esta linha copia o caractere de src para dest no mesmo índice.
i++;: Esta linha incrementa o índice i para passar para o próximo caractere.

Adicionar Terminador Nulo à String Duplicada:
dest[i] = '\0';: Após o loop, esta linha adiciona um terminador nulo ao final da string dest para terminá-la corretamente.

Retornar a String Duplicada:
return (dest);: Por fim, a função retorna um ponteiro para a nova string duplicada criada.
