char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}



--- Explanation ---

    Function Declaration:
        char *ft_strncpy(char *dest, char *src, unsigned int n): This function copies at most n characters from the string 
	src (source) to the string dest (destination). It returns a pointer to the destination string.

    Variable Initialization:
        unsigned int i;: Declares an unsigned integer variable i, which will be used as an index for iterating through the 
	characters of the source string.

    Copying Characters:
        i = 0;: Initializes the index variable i to 0.
        while (i < n && src[i] != '\0'): This loop continues while i is less than n and the current character in src is not 
	the null terminator.
            Inside the loop:
                dest[i] = src[i];: Copies the character from the source string src to the destination string dest at the 
		index i.
                ++i;: Increments i to move to the next character.

    Filling with Null Terminators:
        while (i < n): This loop runs until i reaches n, ensuring that the destination string has a length of n.
            Inside the loop:
                dest[i] = '\0';: Fills the remaining positions in dest with null terminators if the source string was 
		shorter than n.
                i++;: Increments i to move to the next position.

    Return Statement:
        return (dest);: Finally, the function returns the pointer to the destination string dest, allowing the caller to use 
	the copied string.




	
Português:

    Declaração da Função:
        char *ft_strncpy(char *dest, char *src, unsigned int n): Esta função copia no máximo n caracteres da string src (fonte) 
	para a string dest (destino). Ela retorna um ponteiro para a string de destino.

    Inicialização da Variável:
        unsigned int i;: Declara uma variável inteira sem sinal i, que será usada como índice para percorrer os caracteres da 
	string fonte.

    Copiando Caracteres:
        i = 0;: Inicializa a variável de índice i com 0.
        while (i < n && src[i] != '\0'): Este loop continua enquanto i for menor que n e o caractere atual em src não for o 
	terminador nulo.
            Dentro do loop:
                dest[i] = src[i];: Copia o caractere da string fonte src para a string de destino dest no índice i.
                ++i;: Incrementa i para passar para o próximo caractere.

    Preenchendo com Terminadores Nulos:
        while (i < n): Este loop é executado até que i atinja n, garantindo que a string de destino tenha um comprimento de n.
            Dentro do loop:
                dest[i] = '\0';: Preenche as posições restantes em dest com terminadores nulos se a string fonte for mais curta 
		que n.
                i++;: Incrementa i para passar para a próxima posição.

    Instrução de Retorno:
        return (dest);: Finalmente, a função retorna o ponteiro para a string de destino dest, permitindo que o chamador use a 
	string copiada.
