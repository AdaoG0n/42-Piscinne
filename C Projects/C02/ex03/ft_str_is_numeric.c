int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}



--- Explanation ---

    Function Declaration:
        int ft_str_is_numeric(char *str): This function checks if the string str contains only numeric characters (digits 
	from 0 to 9). It returns 1 if the string is numeric and 0 otherwise.

    Variable Initialization:
        int i;: Declares an integer variable i, which will be used as an index to iterate through the characters of the string.

    Empty String Check:
        if (str[i] == '\0'): This condition checks if the first character of the string is the null terminator, indicating 
	an empty string.
            return (1);: If the string is empty, it returns 1, as an empty string can be considered to contain only numeric 
	    characters.

    Character Iteration:
        while (str[i] != '\0'): This loop continues until the end of the string (when it reaches the null terminator).
            Inside the loop:
                if (str[i] < '0' || str[i] > '9'): This condition checks if the current character is not a digit (not in the 
		range from '0' to '9').
                    return (0);: If the character is not numeric, it returns 0, indicating that the string contains non-numeric 
		    characters.

    Successful Check:
        return (1);: If the loop completes without returning 0, it means all characters in the string are numeric. The function 
	then returns 1.




Português:

    Declaração da Função:
        int ft_str_is_numeric(char *str): Esta função verifica se a string str contém apenas caracteres numéricos (dígitos de 0 
	a 9). Retorna 1 se a string for numérica e 0 caso contrário.

    Inicialização da Variável:
        int i;: Declara uma variável inteira i, que será usada como índice para percorrer os caracteres da string.

    Verificação de String Vazia:
        if (str[i] == '\0'): Esta condição verifica se o primeiro caractere da string é o terminador nulo, indicando uma string 
	vazia.
            return (1);: Se a string estiver vazia, retorna 1, já que uma string vazia pode ser considerada como contendo apenas 
	    caracteres numéricos.

    Iteração sobre os Caracteres:
        while (str[i] != '\0'): Este loop continua até o final da string (quando atinge o terminador nulo).
            Dentro do loop:
                if (str[i] < '0' || str[i] > '9'): Esta condição verifica se o caractere atual não é um dígito (não está no 
		intervalo de '0' a '9').
                    return (0);: Se o caractere não for numérico, retorna 0, indicando que a string contém caracteres não numéricos.

    Verificação de Sucesso:
        return (1);: Se o loop é concluído sem retornar 0, significa que todos os caracteres da string são numéricos. 
	A função, então, retorna 1.
