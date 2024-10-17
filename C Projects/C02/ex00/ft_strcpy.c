char	*ft_strcpy(char *dest, char *src)
{
	int		i;

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
--- Explanation ---

    Function Declaration:
        char *ft_strcpy(char *dest, char *src): This function copies a string from src (source) to dest (destination). 
	It returns a pointer to the destination string.

    Variable Initialization:
        int i;: Declares an integer variable i, which will be used as an index to iterate through the characters of the string.

    Copying the String:
        i = 0;: Initializes the index variable i to 0.
        while (src[i] != '\0'): This loop continues until it reaches the null terminator ('\0') of the source string.
            Inside the loop:
                dest[i] = src[i];: Copies the character from the source string src to the destination string dest at the same 
		index i.
                i++;: Increments i to move to the next character in both strings.

    Null Terminator:
        dest[i] = '\0';: After the loop ends (meaning the entire source string has been copied), it adds a null terminator to 
	the end of the destination string to mark the end of the string.

    Return Statement:
        return (dest);: Finally, the function returns the pointer to the destination string dest, allowing the caller to use 
	the copied string.



	
Português:

    Declaração da Função:
        char *ft_strcpy(char *dest, char *src): Esta função copia uma string da src (fonte) para dest (destino). Ela retorna 
	um ponteiro para a string de destino.

    Inicialização da Variável:
        int i;: Declara uma variável inteira i, que será usada como índice para percorrer os caracteres da string.

    Copiando a String:
        i = 0;: Inicializa a variável de índice i com 0.
        while (src[i] != '\0'): Este loop continua até alcançar o terminador nulo ('\0') da string fonte.
            Dentro do loop:
                dest[i] = src[i];: Copia o caractere da string fonte src para a string de destino dest no mesmo índice i.
                i++;: Incrementa i para passar para o próximo caractere em ambas as strings.

    Terminador Nulo:
        dest[i] = '\0';: Após o fim do loop (significando que toda a string fonte foi copiada), adiciona um terminador nulo ao 
	final da string de destino para marcar o fim da string.

    Instrução de Retorno:
        return (dest);: Finalmente, a função retorna o ponteiro para a string de destino dest, permitindo que o chamador use a 
	string copiada.
