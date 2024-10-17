char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*substr;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		start = str;
		substr = to_find;
		while (*str && *substr && (*str == *substr))
		{
			str++;
			substr++;
		}
		if (*substr == '\0')
		{
			return (start);
		}
		str = start + 1;
	}
	return (0);
}



_______________________________________________________________________________________________
Explanation

Function Declaration:
char *ft_strstr(char *str, char *to_find):
This function searches for the first occurrence of the substring to_find in the string str. 
It returns a pointer to the beginning of the found substring or NULL if the substring is not found.

Checking for Empty Substring:
if (*to_find == '\0'):
This line checks if the substring to_find is empty. If it is, the function returns the original string str since an 
empty substring is considered to be found at the start.

Outer Loop for Iterating Through str:
while (*str):
This loop iterates through each character of the string str until it reaches the null terminator ('\0').
    start = str;:
	This line saves the current position of str in the pointer start, which will be used to return the starting position 
	of the found substring.
    substr = to_find;:
	This line initializes the pointer substr to point to the beginning of the substring to_find.

Inner Loop for Comparing Substring:
while (*str && *substr && (*str == *substr)):
This loop compares each character of str with to_find as long as neither pointer has reached a null terminator and the 
characters match.
    str++;:
	If the characters match, both pointers are incremented to move to the next character in their respective strings.

Checking for End of Substring:
if (*substr == '\0'):
After exiting the inner loop, this condition checks if the end of the substring to_find has been reached. 
If so, it means the substring was found starting from the start position.
    return (start);:
	The function returns the pointer start, which points to the beginning of the found substring in str.

Moving to the Next Character in str:
str = start + 1;:
If the substring was not found in the current position, this line moves the pointer str to the next character in the string 
by incrementing start by one.

Return Statement for Not Found:
return (0);:
If the substring to_find is not found in the entire string str, the function returns NULL (0).
Português:

Declaração da Função:
char *ft_strstr(char *str, char *to_find):
Esta função procura a primeira ocorrência da substring to_find na string str. Retorna um ponteiro para o início da substring 
encontrada ou NULL se a substring não for encontrada.

Verificando Substring Vazia:
if (*to_find == '\0'):
Esta linha verifica se a substring to_find está vazia. Se estiver, a função retorna a string original str, pois uma substring 
vazia é considerada encontrada no início.

Loop Externo para Iterar em str:
while (*str):
Este loop itera por cada caractere da string str até alcançar o terminador nulo ('\0').
    start = str;:
	Esta linha salva a posição atual de str no ponteiro start, que será usado para retornar a posição inicial da substring 
	encontrada.
    substr = to_find;:
	Esta linha inicializa o ponteiro substr para apontar para o início da substring to_find.

Loop Interno para Comparar Substring:
while (*str && *substr && (*str == *substr)):
Este loop compara cada caractere de str com to_find enquanto nenhum dos ponteiros alcançou um terminador nulo e os caracteres 
correspondem.
    str++;:
	Se os caracteres corresponderem, ambos os ponteiros são incrementados para mover para o próximo caractere em suas
	respectivas strings.

Verificando o Fim da Substring:
if (*substr == '\0'):
Após sair do loop interno, esta condição verifica se o final da substring to_find foi alcançado. Se sim, significa que a 
substring foi encontrada a partir da posição start.
    return (start);:
	A função retorna o ponteiro start, que aponta para o início da substring encontrada em str.

Movendo para o Próximo Caractere em str:
str = start + 1;:
Se a substring não foi encontrada na posição atual, esta linha move o ponteiro str para o próximo caractere da string, 
incrementando start em um.

Instrução de Retorno para Não Encontrado:
return (0);:
Se a substring to_find não for encontrada em toda a string str, a função retorna NULL (0).
