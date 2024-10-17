int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}


Explanation

Function Declaration:
int ft_strncmp(char *s1, char *s2, unsigned int n):
This function compares the first n characters of two strings, s1 and s2, lexicographically. 
It returns an integer that indicates the difference between the first non-matching characters or 0 if the strings are 
equal up to n.

Variable Initialization:
unsigned int i;:
Declares an integer variable i, which will be used as an index to iterate through the characters of both strings.

Character Comparison Loop:
while ((s1[i] || s2[i]) && (i < n)):
This loop continues to compare characters at index i of both strings as long as either string has not reached its null 
terminator ('\0') and i is less than n.

Check for Non-Matching Characters:
if (s1[i] != s2[i]):
Inside the loop, this condition checks if the characters at the current index i of both strings are not equal.
    return (s1[i] - s2[i]);:
	If the characters differ, the function returns the difference between them. This value indicates which string is 
	lexicographically greater or lesser.

Increment Index:
i++;:
If the characters are equal, the index i is incremented to compare the next characters.

Return Statement:
return (0);:
If the loop completes without finding any differences in the first n characters, the function returns 0, 
indicating that the strings are equal up to the specified length.


	
	Português:

Declaração da Função:
int ft_strncmp(char *s1, char *s2, unsigned int n):
Esta função compara os primeiros n caracteres de duas strings, s1 e s2, lexicograficamente. 
Retorna um inteiro que indica a diferença entre os primeiros caracteres que não coincidem ou 0 se as strings forem iguais até n.

Inicialização da Variável:
unsigned int i;:
Declara uma variável inteira i, que será usada como índice para iterar pelos caracteres de ambas as strings.

Loop de Comparação de Caracteres:
while ((s1[i] || s2[i]) && (i < n)):
Este loop continua a comparar caracteres no índice i de ambas as strings enquanto uma das strings não tenha alcançado seu 
terminador nulo ('\0') e i seja menor que n.

Verificação de Caracteres Não Coincidentes:
if (s1[i] != s2[i]):
Dentro do loop, esta condição verifica se os caracteres no índice atual i de ambas as strings são diferentes.
    return (s1[i] - s2[i]);:
	Se os caracteres diferirem, a função retorna a diferença entre eles. Esse valor indica qual string é lexicograficamente 
	maior ou menor.

Incremento do Índice:
i++;:
Se os caracteres forem iguais, o índice i é incrementado para comparar os próximos caracteres.

Instrução de Retorno:
return (0);:
Se o loop completar sem encontrar diferenças nos primeiros n caracteres, a função retorna 0, indicando que as strings são 
iguais até o comprimento especificado.
