int	ft_str_is_alpha(char *str)
{
	int	i;
	int	c;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
			return (0);
		i++;
	}
	return (1);
}



_______________________________________________________________________________________________
--- Explanation ---

    Function Declaration:
        int ft_str_is_alpha(char *str): This function checks if the string str contains only alphabetic characters (both 
	uppercase and lowercase). It returns 1 if the string is alphabetic and 0 otherwise.

    Variable Initialization:
        int i;: Declares an integer variable i, which will be used as an index to iterate through the characters of the string.
        int c;: Declares an integer variable c, which will hold the ASCII value of the current character being checked.

    Empty String Check:
        if (str[i] == '\0'): This condition checks if the first character of the string is the null terminator, indicating an 
	empty string.
            return (1);: If the string is empty, it returns 1, as an empty string can be considered to contain only alphabetic 
	    characters.

    Character Iteration:
        while (str[i] != '\0'): This loop continues until the end of the string (when it reaches the null terminator).
            Inside the loop:
                c = str[i];: Assigns the ASCII value of the current character to c.
                if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z')): This condition checks if c is not an uppercase letter (A to Z)
		and not a lowercase letter (a to z).
                    return (0);: If c is not alphabetic, it returns 0, indicating that the string contains non-alphabetic 
		    characters.

    Successful Check:
        return (1);: If the loop completes without returning 0, it means all characters in the string are alphabetic. 
	The function then returns 1.





Português:

    Declaração da Função:
        int ft_str_is_alpha(char *str): Esta função verifica se a string str contém apenas caracteres alfabéticos (tanto 
	maiúsculos quanto minúsculos). Retorna 1 se a string for alfabética e 0 caso contrário.

    Inicialização da Variável:
        int i;: Declara uma variável inteira i, que será usada como índice para percorrer os caracteres da string.
        int c;: Declara uma variável inteira c, que armazenará o valor ASCII do caractere atual que está sendo verificado.

    Verificação de String Vazia:
        if (str[i] == '\0'): Esta condição verifica se o primeiro caractere da string é o terminador nulo, indicando uma 
	string vazia.
            return (1);: Se a string estiver vazia, retorna 1, já que uma string vazia pode ser considerada como contendo 
	    apenas caracteres alfabéticos.

    Iteração sobre os Caracteres:
        while (str[i] != '\0'): Este loop continua até o final da string (quando atinge o terminador nulo).
            Dentro do loop:
                c = str[i];: Atribui o valor ASCII do caractere atual a c.
                if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z')): Esta condição verifica se c não é uma letra maiúscula (A a Z) 
		e não é uma letra minúscula (a a z).
                    return (0);: Se c não for alfabético, retorna 0, indicando que a string contém caracteres não alfabéticos.

    Verificação de Sucesso:
        return (1);: Se o loop é concluído sem retornar 0, significa que todos os caracteres da string são alfabéticos. 
	A função, então, retorna 1.
