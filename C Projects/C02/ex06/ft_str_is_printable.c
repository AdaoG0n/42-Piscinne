int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

--- Explanation ---

    Function Declaration:
        int ft_str_is_printable(char *str): This function checks if the string str contains only printable ASCII characters. 
	It returns 1 if all characters are printable and 0 otherwise.

    Variable Initialization:
        int i;: Declares an integer variable i, which will be used as an index to iterate through the characters of the string.

    Empty String Check:
        if (str[i] == '\0'): This condition checks if the first character of the string is the null terminator, indicating an 
	empty string.
            return (1);: If the string is empty, it returns 1, as an empty string can be considered as containing only printable 
	    characters.

    Character Iteration:
        while (str[i] != '\0'): This loop continues until the end of the string (when it reaches the null terminator).
            Inside the loop:
                if (str[i] < 32 || str[i] > 126): This condition checks if the current character is not a printable ASCII 
		character (ASCII values less than 32 are non-printable, and values greater than 126 are also non-printable).
                    return (0);: If the character is not printable, it returns 0, indicating that the string contains 
		    non-printable characters.

    Successful Check:
        return (1);: If the loop completes without returning 0, it means all characters in the string are printable. 
	The function then returns 1.




Português:

    Declaração da Função:
        int ft_str_is_printable(char *str): Esta função verifica se a string str contém apenas caracteres ASCII imprimíveis. 
	Retorna 1 se todos os caracteres forem imprimíveis e 0 caso contrário.

    Inicialização da Variável:
        int i;: Declara uma variável inteira i, que será usada como índice para percorrer os caracteres da string.

    Verificação de String Vazia:
        if (str[i] == '\0'): Esta condição verifica se o primeiro caractere da string é o terminador nulo, indicando uma string 
	vazia.
            return (1);: Se a string estiver vazia, retorna 1, já que uma string vazia pode ser considerada como contendo apenas 
	    caracteres imprimíveis.

    Iteração sobre os Caracteres:
        while (str[i] != '\0'): Este loop continua até o final da string (quando atinge o terminador nulo).
            Dentro do loop:
                if (str[i] < 32 || str[i] > 126): Esta condição verifica se o caractere atual não é um caractere ASCII imprimível 
		(valores ASCII menores que 32 são não imprimíveis, e valores maiores que 126 também são não imprimíveis).
                    return (0);: Se o caractere não for imprimível, retorna 0, indicando que a string contém caracteres que não 
		    são imprimíveis.

    Verificação de Sucesso:
        return (1);: Se o loop é concluído sem retornar 0, significa que todos os caracteres da string são imprimíveis. 
	A função, então, retorna 1.
