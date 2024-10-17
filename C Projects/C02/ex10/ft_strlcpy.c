unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}



--- Explanation ---

Function Declaration:
	unsigned int ft_strlcpy(char *dest, char *src, unsigned int size): This function copies the string from src to dest, 
	ensuring that the destination buffer is not overflowed. It takes three arguments: a destination string dest, a source 
	string src, and the size of the destination buffer. The function returns the length of the source string.

Variable Initialization:
	unsigned int i;: Declares an integer variable i to use as an index for copying characters from the source to the 
	destination.
	unsigned int src_len;: Declares an integer variable src_len to hold the length of the source string.

Calculate Source Length:
	while (src[src_len] != '\0')
           This loop calculates the length of the source string by incrementing src_len until it encounters the null terminator ('\0'). 
           After this loop, src_len contains the total number of characters in src.

Check for Size Greater Than Zero:
	if (size > 0)
    	   This condition checks if the size of the destination buffer is greater than zero, ensuring that there is space to copy 
    	   characters.

Copy Characters from Source to Destination:
	while (src[i] != '\0' && i < size - 1)
    	   This loop copies characters from the source string src to the destination string dest until either the end of the source 
	   string is reached or the maximum number of characters to copy (size - 1) is reached.
        	dest[i] = src[i];: Each character from src is copied to dest.
       		i++;: The index i is incremented to move to the next character.

Null Terminate the Destination String:
	dest[i] = '\0';
 	   After the loop, this line adds a null terminator to the end of the destination string to ensure it is properly 
	   terminated.

Return Source Length:
	return (src_len);
   	   Finally, the function returns the length of the source string, regardless of how many characters were copied to the 
	   destination.

		 
		 
Português:

Declaração da Função:
	unsigned int ft_strlcpy(char *dest, char *src, unsigned int size): Esta função copia a string de src para dest, garantindo que o buffer de destino não seja transbordado. Ela aceita três argumentos: uma string de destino dest, uma string de origem src e o tamanho do buffer de destino. A função retorna o comprimento da string de origem.

Inicialização da Variável:
	unsigned int i;: Declara uma variável inteira i para usar como índice na cópia de caracteres da origem para o destino.
	unsigned int src_len;: Declara uma variável inteira src_len para armazenar o comprimento da string de origem.

Calcular o Comprimento da Origem:
	while (src[src_len] != '\0')
 	   Este loop calcula o comprimento da string de origem, incrementando src_len até encontrar o terminador nulo ('\0'). 
	   Após este loop, src_len contém o número total de caracteres em src.

Verificar se o Tamanho é Maior que Zero:
	if (size > 0)
	    Esta condição verifica se o tamanho do buffer de destino é maior que zero, garantindo que haja espaço para copiar 
	    caracteres.

Copiar Caracteres da Origem para o Destino:
	while (src[i] != '\0' && i < size - 1)
	    Este loop copia caracteres da string de origem src para a string de destino dest, até que o final da string de 
	    origem seja alcançado ou o número máximo de caracteres a copiar (size - 1) seja alcançado.
  	      dest[i] = src[i];: Cada caractere de src é copiado para dest.
   	      i++;: O índice i é incrementado para passar para o próximo caractere.

Adicionar Terminador Nulo à String de Destino:
	dest[i] = '\0';
 	   Após o loop, esta linha adiciona um terminador nulo ao final da string de destino para garantir que ela esteja 
	   devidamente terminada.

Retornar o Comprimento da Origem:
	return (src_len);
 	   Finalmente, a função retorna o comprimento da string de origem, independentemente de quantos caracteres foram 
	   copiados para o destino.
