char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}



_______________________________________________________________________________________________
--- Explanation ---

    Function Declaration:
        char *ft_strupcase(char *str): This function takes a string str as input and converts all lowercase letters in 
	the string to uppercase. It returns the modified string.

    Variable Initialization:
        int i;: Declares an integer variable i, which will be used as an index to iterate through the characters of the string.

    Character Iteration:
        while (str[i] != '\0'): This loop continues until it reaches the end of the string (the null terminator).
            Inside the loop:
                if (str[i] >= 'a' && str[i] <= 'z'): This condition checks if the current character is a lowercase letter 
		(between 'a' and 'z').
                    str[i] = str[i] - ('a' - 'A');: If the character is lowercase, this line converts it to uppercase by 
		    subtracting the difference between lowercase and uppercase ASCII values. This works because:
                        'a' is 97 and 'A' is 65, so ('a' - 'A') equals 32. Subtracting 32 from a lowercase letter gives its 
			uppercase equivalent.

    Increment Index:
        i++;: After checking and potentially converting the character, the index i is incremented to move to the next character 
	in the string.

    Return Statement:
        return (str);: Once the entire string has been processed, the function returns the modified string with all lowercase 
	letters converted to uppercase.






Português:

    Declaração da Função:
        char *ft_strupcase(char *str): Esta função recebe uma string str como entrada e converte todas as letras minúsculas na 
	string para maiúsculas. Retorna a string modificada.

    Inicialização da Variável:
        int i;: Declara uma variável inteira i, que será usada como índice para percorrer os caracteres da string.

    Iteração sobre os Caracteres:
        while (str[i] != '\0'): Este loop continua até alcançar o final da string (o terminador nulo).
            Dentro do loop:
                if (str[i] >= 'a' && str[i] <= 'z'): Esta condição verifica se o caractere atual é uma letra minúscula 
		(entre 'a' e 'z').
                    str[i] = str[i] - ('a' - 'A');: Se o caractere for minúsculo, esta linha converte-o para maiúsculo 
		    subtraindo a diferença entre os valores ASCII de minúsculas e maiúsculas. Isso funciona porque:
                        'a' é 97 e 'A' é 65, portanto, ('a' - 'A') é igual a 32. Subtrair 32 de uma letra minúscula fornece 
			seu equivalente em maiúscula.

    Incremento do Índice:
        i++;: Após verificar e, potencialmente, converter o caractere, o índice i é incrementado para mover para o próximo 
	caractere da string.

    Instrução de Retorno:
        return (str);: Uma vez que toda a string foi processada, a função retorna a string modificada com todas as letras 
	minúsculas convertidas para maiúsculas.
