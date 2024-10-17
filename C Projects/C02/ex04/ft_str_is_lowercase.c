int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}



_______________________________________________________________________________________________
--- Explanation ---

    Function Declaration:
        int ft_str_is_lowercase(char *str): This function checks if the string str contains only lowercase alphabetic 
	characters (from 'a' to 'z'). It returns 1 if the string is lowercase and 0 otherwise.

    Variable Initialization:
        int i;: Declares an integer variable i, which will be used as an index to iterate through the characters of the string.

    Empty String Check:
        if (str[i] == '\0'): This condition checks if the first character of the string is the null terminator, indicating an 
	empty string.
            return (1);: If the string is empty, it returns 1, as an empty string can be considered to contain only lowercase 
	    letters.

    Character Iteration:
        while (str[i] != '\0'): This loop continues until the end of the string (when it reaches the null terminator).
            Inside the loop:
                if (str[i] < 'a' || str[i] > 'z'): This condition checks if the current character is not a lowercase letter (not 
		in the range from 'a' to 'z').
                    return (0);: If the character is not lowercase, it returns 0, indicating that the string contains 
		    non-lowercase characters.

    Successful Check:
        return (1);: If the loop completes without returning 0, it means all characters in the string are lowercase. 
	The function then returns 1.




Português:

    Declaração da Função:
        int ft_str_is_lowercase(char *str): Esta função verifica se a string str contém apenas caracteres alfabéticos 
	em minúsculas (de 'a' a 'z'). Retorna 1 se a string for minúscula e 0 caso contrário.

    Inicialização da Variável:
        int i;: Declara uma variável inteira i, que será usada como índice para percorrer os caracteres da string.

    Verificação de String Vazia:
        if (str[i] == '\0'): Esta condição verifica se o primeiro caractere da string é o terminador nulo, indicando uma 
	string vazia.
            return (1);: Se a string estiver vazia, retorna 1, já que uma string vazia pode ser considerada como contendo 
	    apenas letras minúsculas.

    Iteração sobre os Caracteres:
        while (str[i] != '\0'): Este loop continua até o final da string (quando atinge o terminador nulo).
            Dentro do loop:
                if (str[i] < 'a' || str[i] > 'z'): Esta condição verifica se o caractere atual não é uma letra minúscula (não 
		está no intervalo de 'a' a 'z').
                    return (0);: Se o caractere não for minúsculo, retorna 0, indicando que a string contém caracteres que não 
		    são minúsculos.

    Verificação de Sucesso:
        return (1);: Se o loop é concluído sem retornar 0, significa que todos os caracteres da string são minúsculos. 
	A função, então, retorna 1.
