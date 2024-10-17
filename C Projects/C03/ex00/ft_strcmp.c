int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}


_______________________________________________________________________________________________
Explanation

Function Declaration:
int ft_strcmp(char *s1, char *s2):
This function compares two strings, s1 and s2, lexicographically. It returns an integer that indicates the difference 
between the first non-matching characters of the two strings.

Variable Initialization:
unsigned int i;:
Declares an integer variable i, which will be used as an index to iterate through the characters of both strings.

Character Comparison Loop:
while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'):
This loop continues to compare characters at index i of both strings as long as they are equal and neither string has 
reached its null terminator ('\0'). The loop increments i with each iteration until a difference is found or the end of 
either string is reached.

Return Statement:
return (s1[i] - s2[i]);:
Once the loop exits, this line returns the difference between the characters at index i in both strings. If the characters 
are the same, the result will be zero. If one string is lexicographically less than the other, the result will be negative, 
and if it is greater, the result will be positive.

	
	Português:

Declaração da Função:
int ft_strcmp(char *s1, char *s2):
Esta função compara duas strings, s1 e s2, lexicograficamente. Retorna um inteiro que indica a diferença entre os primeiros 
caracteres que não coincidem das duas strings.

Inicialização da Variável:
unsigned int i;:
Declara uma variável inteira i, que será usada como índice para iterar pelos caracteres de ambas as strings.

Loop de Comparação de Caracteres:
while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'):
Este loop continua a comparar caracteres no índice i de ambas as strings enquanto forem iguais e nenhuma das strings tenha 
alcançado seu terminador nulo ('\0'). O loop incrementa i a cada iteração até que uma diferença seja encontrada ou o final de 
alguma das strings seja alcançado.

Instrução de Retorno:
return (s1[i] - s2[i]);:
Uma vez que o loop sai, esta linha retorna a diferença entre os caracteres no índice i de ambas as strings. Se os caracteres 
forem iguais, o resultado será zero. Se uma string for lexicograficamente menor que a outra, o resultado será negativo, e se 
for maior, o resultado será positivo.
