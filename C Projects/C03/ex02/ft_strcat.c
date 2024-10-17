char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}


_______________________________________________________________________________________________
Explanation

Function Declaration:
char *ft_strcat(char *dest, char *src):
This function concatenates the string src to the end of the string dest. It returns a pointer to the resulting destination 
string.

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

Concatenating the Source String:
while (*src):
This loop iterates through each character of the source string src until it reaches the null terminator.
    *ptr = *src;:
	Inside the loop, each character from src is copied to the current position pointed to by ptr in the destination string.
    ptr++;:
	After copying, ptr is incremented to move to the next position in the destination string.
    src++;:
	The pointer src is also incremented to move to the next character in the source string.

Null Termination of the Concatenated String:
*ptr = '\0';:
Once all characters from src have been copied, this line adds a null terminator at the end of the concatenated string to 
ensure it is properly terminated.

Return Statement:
return (dest);:
Finally, the function returns the pointer to the destination string dest, which now contains the original content followed 
by the content of src.

	
	
	Português:

Declaração da Função:
char *ft_strcat(char *dest, char *src):
Esta função concatena a string src ao final da string dest. Retorna um ponteiro para a string de destino resultante.

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

Concatenando a String de Origem:
while (*src):
Este loop itera por cada caractere da string de origem src até alcançar o terminador nulo.
    *ptr = *src;:
	Dentro do loop, cada caractere de src é copiado para a posição atual apontada por ptr na string de destino.
    ptr++;:
	Após a cópia, ptr é incrementado para mover para a próxima posição na string de destino.
    src++;:
	O ponteiro src também é incrementado para passar para o próximo caractere na string de origem.

Terminador Nulo da String Concatenada:
*ptr = '\0';:
Uma vez que todos os caracteres de src foram copiados, esta linha adiciona um terminador nulo ao final da string concatenada 
para garantir que ela esteja devidamente terminada.

Instrução de Retorno:
return (dest);:
Finalmente, a função retorna o ponteiro para a string de destino dest, que agora contém o conteúdo original seguido pelo 
conteúdo de src.
