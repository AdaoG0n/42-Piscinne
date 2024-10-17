char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
	{
		ptr++;
	}
	while (*src && nb > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}



Explanation

Function Declaration:
char *ft_strncat(char *dest, char *src, unsigned int nb):
This function concatenates up to nb characters from the string src to the end of the string dest. 
It returns a pointer to the resulting destination string.

Pointer Initialization:
char *ptr;:
Declares a pointer variable ptr, which will be used to traverse the destination string.

Finding the End of the Destination String:
ptr = dest;:
This line initializes ptr to point to the beginning of the destination string dest.
while (*ptr):
This loop continues until it finds the null terminator ('\0') in the destination string.
    ptr++;:
Inside the loop, ptr is incremented to move to the next character in the destination string.

Concatenating Characters from the Source String:
while (*src && nb > 0):
This loop iterates through each character of the source string src as long as it has not reached the null terminator 
and nb is greater than zero.
    *ptr = *src;:
	Inside the loop, each character from src is copied to the current position pointed to by ptr in the destination string.
    ptr++;:
	After copying, ptr is incremented to move to the next position in the destination string.
    src++;:
	The pointer src is also incremented to move to the next character in the source string.
    nb--;:
	The variable nb is decremented to track how many more characters can be copied.

Null Termination of the Concatenated String:
*ptr = '\0';:
Once the specified number of characters from src have been copied (or if src was shorter than nb), this line adds a null 
terminator at the end of the concatenated string to ensure it is properly terminated.

Return Statement:
return (dest);:
Finally, the function returns the pointer to the destination string dest, which now contains the original content followed 
by the first nb characters of src.

	
	
	Português:

Declaração da Função:
char *ft_strncat(char *dest, char *src, unsigned int nb):
Esta função concatena até nb caracteres da string src ao final da string dest. Retorna um ponteiro para a string de destino 
resultante.

Inicialização do Ponteiro:
char *ptr;:
Declara uma variável ponteiro ptr, que será usada para percorrer a string de destino.

Encontrando o Fim da String de Destino:
ptr = dest;:
Esta linha inicializa ptr para apontar para o início da string de destino dest.
while (*ptr):
Este loop continua até encontrar o terminador nulo ('\0') na string de destino.
    ptr++;:
	Dentro do loop, ptr é incrementado para passar para o próximo caractere na string de destino.

Concatenando Caracteres da String de Origem:
while (*src && nb > 0):
Este loop itera por cada caractere da string de origem src, enquanto não alcançar o terminador nulo e nb for maior que zero.
    *ptr = *src;:
	Dentro do loop, cada caractere de src é copiado para a posição atual apontada por ptr na string de destino.
    ptr++;:
	Após a cópia, ptr é incrementado para mover para a próxima posição na string de destino.
    src++;:
	O ponteiro src também é incrementado para passar para o próximo caractere na string de origem.
    nb--;:
	A variável nb é decrementada para rastrear quantos caracteres ainda podem ser copiados.

Terminador Nulo da String Concatenada:
*ptr = '\0';:
Uma vez que o número especificado de caracteres de src foi copiado (ou se src for mais curto que nb), esta linha adiciona 
um terminador nulo ao final da string concatenada para garantir que ela esteja devidamente terminada.

Instrução de Retorno:
return (dest);:
Finalmente, a função retorna o ponteiro para a string de destino dest, que agora contém o conteúdo original seguido pelos 
primeiros nb caracteres de src.
