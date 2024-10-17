char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_word;

	i = 0;
	first_word = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (first_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!first_word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			first_word = 0;
		}
		else
		{
			first_word = 1;
		}
		i++;
	}
	return (str);
}


--- Explanation ---

Function Declaration:
	char *ft_strlowcase(char *str): This function takes a string str as input and converts all uppercase letters in the 
	string to lowercase. It returns the modified string.

Variable Initialization:
	int i;: Declares an integer variable i, which will be used as an index to iterate through the characters of the string.

Character Iteration:
	while (str[i] != '\0'): This loop continues until it reaches the end of the string (the null terminator).
    Inside the loop:
        if (str[i] >= 'A' && str[i] <= 'Z'): This condition checks if the current character is an uppercase letter 
	(between 'A' and 'Z').
            str[i] = str[i] - ('A' - 'a');: If the character is uppercase, this line converts it to lowercase by subtracting 
	    the difference between the ASCII values of uppercase and lowercase letters. Specifically:
                'A' is 65 and 'a' is 97, so ('A' - 'a') equals -32. Adding 32 to an uppercase letter gives its lowercase 
		equivalent.

Increment Index:
	i++;: After checking and potentially converting the character, the index i is incremented to move to the next character 
	in the string.

Return Statement:
	return (str);: Once the entire string has been processed, the function returns the modified string with all uppercase 
	letters converted to lowercase.




Português:

Declaração da Função:
	char *ft_strlowcase(char *str): Esta função recebe uma string str como entrada e converte todas as letras maiúsculas 
	na string para minúsculas. Retorna a string modificada.

Inicialização da Variável:
	int i;: Declara uma variável inteira i, que será usada como índice para percorrer os caracteres da string.

Iteração sobre os Caracteres:
	while (str[i] != '\0'): Este loop continua até alcançar o final da string (o terminador nulo).
    Dentro do loop:
        if (str[i] >= 'A' && str[i] <= 'Z'): Esta condição verifica se o caractere atual é uma letra maiúscula (entre 'A' e 'Z').
            str[i] = str[i] - ('A' - 'a');: Se o caractere for maiúsculo, esta linha converte-o para minúsculo subtraindo a 
	    diferença entre os valores ASCII de maiúsculas e minúsculas. Especificamente:
                'A' é 65 e 'a' é 97, portanto, ('A' - 'a') é igual a -32. Adicionar 32 a uma letra maiúscula fornece seu 
		equivalente em minúscula.

Incremento do Índice:
	i++;: Após verificar e, potencialmente, converter o caractere, o índice i é incrementado para mover para o próximo 
	caractere da string.

Instrução de Retorno:
	return (str);: Uma vez que toda a string foi processada, a função retorna a string modificada com todas as letras 
	maiúsculas convertidas para minúsculas.
